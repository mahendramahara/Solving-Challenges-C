/* Program 85: Database Interaction: Connect to a database using MySQL or SQLite and perform CRUD operations. */
#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3 *db;
    char *err_msg = 0;
    
    // Open database
    int rc = sqlite3_open("test.db", &db);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
    printf("Database opened successfully.\n");

    // Create table
    const char *sql_create_table = "CREATE TABLE IF NOT EXISTS test_table (id INT PRIMARY KEY, name TEXT NOT NULL);";
    rc = sqlite3_exec(db, sql_create_table, 0, 0, &err_msg);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", err_msg);
        sqlite3_free(err_msg);
    } else {
        printf("Table created successfully.\n");
    }

    // Insert data
    const char *sql_insert = "INSERT INTO test_table (id, name) VALUES (1, 'Test Record');";
    rc = sqlite3_exec(db, sql_insert, 0, 0, &err_msg);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", err_msg);
        sqlite3_free(err_msg);
    } else {
        printf("Data inserted successfully.\n");
    }

    // Select data
    const char *sql_select = "SELECT * FROM test_table;";
    sqlite3_stmt *stmt;
    rc = sqlite3_prepare_v2(db, sql_select, -1, &stmt, 0);
    if (rc == SQLITE_OK) {
        printf("Selected data:\n");
        while (sqlite3_step(stmt) == SQLITE_ROW) {
            int id = sqlite3_column_int(stmt, 0);
            const unsigned char *name = sqlite3_column_text(stmt, 1);
            printf("ID: %d, Name: %s\n", id, name);
        }
    } else {
        fprintf(stderr, "SQL error: %s\n", sqlite3_errmsg(db));
    }
    sqlite3_finalize(stmt);

    // Close database
    sqlite3_close(db);
    printf("Database closed.\n");

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
