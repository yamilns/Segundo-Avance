#ifndef PAPELERIA_H
#define PAPELERIA_H

#include "Factura.h"
#include "Proveedor.h"
#include "Producto.h"
#include "Inventario.h"
#include <string>
#include <vector>

using namespace std;

class Papeleria {
private:
    string nombre;
    vector<Factura> facturas;
    vector<Proveedor> proveedores;
    Inventario inventario;

public:
    Papeleria(string _nombre) : nombre(_nombre) {}

    void addFactura(const Factura& factura) { facturas.push_back(factura); }
    void addProveedor(const Proveedor& proveedor) { proveedores.push_back(proveedor); }
    void addProducto(const Producto& producto) { inventario.addProducto(producto); }

    vector<Factura> getFacturas() const { return facturas; }
    vector<Proveedor> getProveedores() const { return proveedores; }
    vector<Producto> getInventario() const { return inventario.getProductos(); }

    void mostrarInfo() const {
        cout << "Papeleria: " << nombre << endl;
        cout << "Facturas:" << endl;
        for (const auto& f : facturas) f.mostrarInfo();
        cout << "Proveedores:" << endl;
        for (const auto& p : proveedores) p.mostrarInfo();
        cout << "Inventario:" << endl;
        for (const auto& prod : inventario.getProductos()) prod.mostrarInfo();
    }
};

#endif // PAPELERIA_H
