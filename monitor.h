#pragma once

//int vitalsOk(float temperature, float pulseRate, float spo2);

bool isTemperatureOk(float temperature);
bool isPulseRateOk(float pulseRate);
bool isSpo2Ok(float spo2);
bool vitalsOk(float temperature, float pulseRate, float spo2);
void alertVitalOutOfRange(const char* message);
void blinkWarning();

