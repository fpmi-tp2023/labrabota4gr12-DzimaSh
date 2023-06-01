#include <stdio.h>
#include <sqlite3.h>

int main(int argc, char** argv) {
    sqlite3 *db;
    char *err_msg = 0;
    int rc;

    rc = sqlite3_open("example.db", &db);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }

    printf("Database opened successfully\n");

    sqlite3_close(db);

    return 0;
}