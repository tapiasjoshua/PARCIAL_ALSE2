#ifndef MEDIDOR_ENERGIA_H
#define MEDIDOR_ENERGIA_H

#include <string>
#include <vector>

class MedidorEnergia {
private:
    std::string serie;
    float lecturaActual;
    std::vector<float> historial;

public:
    MedidorEnergia(const std::string& s);
    void registrarLectura(float valor);
    float calcularConsumoTotal() const;
    float promedioDiario() const;
};

#endif