#ifndef MEDIDOR_ENERGIA_H
#define MEDIDOR_ENERGIA_H

#include <string>
#include <vector>

/**
 * Clase que representa un medidor de energía
 */
class MedidorEnergia {
private:
    std::string serie;
    float lecturaActual;
    std::vector<float> historial;

public:
    /**
     * Constructor
     */
    MedidorEnergia(const std::string& s);

    /**
     * Registrar lectura
     */
    void registrarLectura(float valor);

    /**
     * Consumo total
     */
    float calcularConsumoTotal() const;

    /**
     * Promedio
     */
    float promedioDiario() const;
};

#endif