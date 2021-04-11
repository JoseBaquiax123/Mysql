
#include <iostream>
#include <mysql.h>
using namespace std;

int main()
{
    MYSQL* conectar;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "root", "Umg$2019", "kardex", 3306, NULL, 0);

    if(conectar) {
        cout << "conexion exitosa..." << endl;

    }
    else
    {
        cout << "Error en la conexion..." << endl;
    }
    system("pause");
    return 0;
}

