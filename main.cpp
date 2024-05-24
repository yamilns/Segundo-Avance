#include <iostream>
#include <algorithm>
#include "Papeleria.h"

using namespace std;

int main() {
    Papeleria papeleria("Papeleria Esperanza");

    // Ingresar el nombre y el número de productos
    int numProductos;
    cout << "Ingrese el numero de productos: ";
    cin >> numProductos;

    for (int i = 0; i < numProductos; ++i) {
        string nombreProducto;
        double precioProducto;
        int idProducto;

        cout << "Ingrese el nombre del producto " << i + 1 << ": ";
        cin >> nombreProducto;
        cout << "Ingrese el precio del producto " << i + 1 << ": ";
        cin >> precioProducto;
        cout << "Ingrese el ID del producto " << i + 1 << ": ";
        cin >> idProducto;

        Producto producto(nombreProducto, precioProducto, idProducto);
        papeleria.addProducto(producto);
    }

    // Ingresar el nombre y el número de proveedores
    int numProveedores;
    cout << "Ingrese el numero de proveedores: ";
    cin >> numProveedores;

    for (int i = 0; i < numProveedores; ++i) {
        string nombreProveedor;
        int idProveedor;

        cout << "Ingrese el nombre del proveedor " << i + 1 << ": ";
        cin >> nombreProveedor;
        cout << "Ingrese el ID del proveedor " << i + 1 << ": ";
        cin >> idProveedor;

        Proveedor proveedor(nombreProveedor, idProveedor);
        papeleria.addProveedor(proveedor);
    }

    // Ingresar el nombre y el número de facturas
    int numFacturas;
    cout << "Ingrese el numero de facturas: ";
    cin >> numFacturas;

    for (int i = 0; i < numFacturas; ++i) {
        string clienteFactura;
        int idFactura;

        cout << "Ingrese el nombre del cliente para la factura " << i + 1 << ": ";
        cin >> clienteFactura;
        cout << "Ingrese el ID de la factura " << i + 1 << ": ";
        cin >> idFactura;

        Factura factura(clienteFactura, idFactura);
        papeleria.addFactura(factura);
    }

    papeleria.mostrarInfo();

    return 0;
}
