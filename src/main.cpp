/*
 *     main.cpp - Project 03-analog
 *
 *         Muestra la lectura de un potenciometro conectado
 *         al conversor analogico a digital
 *         La salida se muestra en la consola (Serial)
 */

#include <Arduino.h>

/*
 *     Definiciones
 */

/*
 *  Definiciones en platformio.ini
 *  ANAIN       Entrada conversor A/D
 *  DIVISOR     Divisor dado por la cantidad de bits del A/D
 *  SERIAL_BAUD Baud rate de la salida serie
 */

const uint32_t loop_delay = 250;

/*
 *    Variables globales
 */

int sensorValue;

void
setup()
{
    Serial.begin(SERIAL_BAUD);
}

void
loop()
{
    sensorValue = analogRead(ANAIN);
    Serial.print("Valor = ");
    Serial.println((sensorValue * 3.3) / DIVISOR);
    delay(loop_delay);
}
