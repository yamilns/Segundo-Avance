#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Producto.h"
#include <vector>

using namespace std;

class Inventario {
private:
    vector<Producto> productos;

public:
    void addProducto(const Producto& producto) { productos.push_back(producto); }
    vector<Producto> getProductos() const { return productos; }
};

#endif // INVENTARIO_H
