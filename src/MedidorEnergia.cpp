#include "MedidorEnergia.h"
#include <numeric>

MedidorEnergia::MedidorEnergia(const std::string& s)
    : serie(s), lecturaActual(0) {}

void MedidorEnergia::registrarLectura(float valor) {
    lecturaActual = valor;
    historial.push_back(valor);
}

float MedidorEnergia::calcularConsumoTotal() const {
    return std::accumulate(historial.begin(), historial.end(), 0.0f);
}

float MedidorEnergia::promedioDiario() const {
    if (historial.empty()) return 0;
    return calcularConsumoTotal() / historial.size();
}