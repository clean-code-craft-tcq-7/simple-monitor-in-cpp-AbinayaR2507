#ifndef MONITOR_H
#define MONITOR_H

#include <string>

void VitalAlert(const std::string& message);
bool isTemperatureOk(float temperature);
bool isPulseRateOk(float pulseRate);
bool isSpo2Ok(float spo2);
bool vitalsOk(float temperature, float pulseRate, float spo2);

#endif // MONITOR_H
