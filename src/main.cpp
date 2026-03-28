#include <iostream>
#include <vector>
#include "MedidorEnergia.h"

int main() {
    MedidorEnergia m1("A001");
    MedidorEnergia m2("B002");

    std::vector<MedidorEnergia> medidores;
    medidores.push_back(m1);
    medidores.push_back(m2);

    medidores[0].registrarLectura(10);
    medidores[0].registrarLectura(15);

    medidores[1].registrarLectura(20);
    medidores[1].registrarLectura(18);

    for (const auto& m : medidores) {
        std::cout << "Consumo total: "
                  << m.calcularConsumoTotal() << std::endl;
    }

    return 0;
}