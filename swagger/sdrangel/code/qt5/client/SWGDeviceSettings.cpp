/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGDeviceSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDeviceSettings::SWGDeviceSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDeviceSettings::SWGDeviceSettings() {
    device_hw_type = nullptr;
    m_device_hw_type_isSet = false;
    tx = 0;
    m_tx_isSet = false;
    airspy_hf_settings = nullptr;
    m_airspy_hf_settings_isSet = false;
    file_source_settings = nullptr;
    m_file_source_settings_isSet = false;
    hack_rf_input_settings = nullptr;
    m_hack_rf_input_settings_isSet = false;
    hack_rf_output_settings = nullptr;
    m_hack_rf_output_settings_isSet = false;
    lime_sdr_input_settings = nullptr;
    m_lime_sdr_input_settings_isSet = false;
    lime_sdr_output_settings = nullptr;
    m_lime_sdr_output_settings_isSet = false;
    rtl_sdr_settings = nullptr;
    m_rtl_sdr_settings_isSet = false;
}

SWGDeviceSettings::~SWGDeviceSettings() {
    this->cleanup();
}

void
SWGDeviceSettings::init() {
    device_hw_type = new QString("");
    m_device_hw_type_isSet = false;
    tx = 0;
    m_tx_isSet = false;
    airspy_hf_settings = new SWGAirspyHFSettings();
    m_airspy_hf_settings_isSet = false;
    file_source_settings = new SWGFileSourceSettings();
    m_file_source_settings_isSet = false;
    hack_rf_input_settings = new SWGHackRFInputSettings();
    m_hack_rf_input_settings_isSet = false;
    hack_rf_output_settings = new SWGHackRFOutputSettings();
    m_hack_rf_output_settings_isSet = false;
    lime_sdr_input_settings = new SWGLimeSdrInputSettings();
    m_lime_sdr_input_settings_isSet = false;
    lime_sdr_output_settings = new SWGLimeSdrOutputSettings();
    m_lime_sdr_output_settings_isSet = false;
    rtl_sdr_settings = new SWGRtlSdrSettings();
    m_rtl_sdr_settings_isSet = false;
}

void
SWGDeviceSettings::cleanup() {
    if(device_hw_type != nullptr) { 
        delete device_hw_type;
    }

    if(airspy_hf_settings != nullptr) { 
        delete airspy_hf_settings;
    }
    if(file_source_settings != nullptr) { 
        delete file_source_settings;
    }
    if(hack_rf_input_settings != nullptr) { 
        delete hack_rf_input_settings;
    }
    if(hack_rf_output_settings != nullptr) { 
        delete hack_rf_output_settings;
    }
    if(lime_sdr_input_settings != nullptr) { 
        delete lime_sdr_input_settings;
    }
    if(lime_sdr_output_settings != nullptr) { 
        delete lime_sdr_output_settings;
    }
    if(rtl_sdr_settings != nullptr) { 
        delete rtl_sdr_settings;
    }
}

SWGDeviceSettings*
SWGDeviceSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDeviceSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&device_hw_type, pJson["deviceHwType"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&tx, pJson["tx"], "qint32", "");
    
    ::SWGSDRangel::setValue(&airspy_hf_settings, pJson["airspyHFSettings"], "SWGAirspyHFSettings", "SWGAirspyHFSettings");
    
    ::SWGSDRangel::setValue(&file_source_settings, pJson["fileSourceSettings"], "SWGFileSourceSettings", "SWGFileSourceSettings");
    
    ::SWGSDRangel::setValue(&hack_rf_input_settings, pJson["hackRFInputSettings"], "SWGHackRFInputSettings", "SWGHackRFInputSettings");
    
    ::SWGSDRangel::setValue(&hack_rf_output_settings, pJson["hackRFOutputSettings"], "SWGHackRFOutputSettings", "SWGHackRFOutputSettings");
    
    ::SWGSDRangel::setValue(&lime_sdr_input_settings, pJson["limeSdrInputSettings"], "SWGLimeSdrInputSettings", "SWGLimeSdrInputSettings");
    
    ::SWGSDRangel::setValue(&lime_sdr_output_settings, pJson["limeSdrOutputSettings"], "SWGLimeSdrOutputSettings", "SWGLimeSdrOutputSettings");
    
    ::SWGSDRangel::setValue(&rtl_sdr_settings, pJson["rtlSdrSettings"], "SWGRtlSdrSettings", "SWGRtlSdrSettings");
    
}

QString
SWGDeviceSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGDeviceSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(device_hw_type != nullptr && *device_hw_type != QString("")){
        toJsonValue(QString("deviceHwType"), device_hw_type, obj, QString("QString"));
    }
    if(m_tx_isSet){
        obj->insert("tx", QJsonValue(tx));
    }
    if((airspy_hf_settings != nullptr) && (airspy_hf_settings->isSet())){
        toJsonValue(QString("airspyHFSettings"), airspy_hf_settings, obj, QString("SWGAirspyHFSettings"));
    }
    if((file_source_settings != nullptr) && (file_source_settings->isSet())){
        toJsonValue(QString("fileSourceSettings"), file_source_settings, obj, QString("SWGFileSourceSettings"));
    }
    if((hack_rf_input_settings != nullptr) && (hack_rf_input_settings->isSet())){
        toJsonValue(QString("hackRFInputSettings"), hack_rf_input_settings, obj, QString("SWGHackRFInputSettings"));
    }
    if((hack_rf_output_settings != nullptr) && (hack_rf_output_settings->isSet())){
        toJsonValue(QString("hackRFOutputSettings"), hack_rf_output_settings, obj, QString("SWGHackRFOutputSettings"));
    }
    if((lime_sdr_input_settings != nullptr) && (lime_sdr_input_settings->isSet())){
        toJsonValue(QString("limeSdrInputSettings"), lime_sdr_input_settings, obj, QString("SWGLimeSdrInputSettings"));
    }
    if((lime_sdr_output_settings != nullptr) && (lime_sdr_output_settings->isSet())){
        toJsonValue(QString("limeSdrOutputSettings"), lime_sdr_output_settings, obj, QString("SWGLimeSdrOutputSettings"));
    }
    if((rtl_sdr_settings != nullptr) && (rtl_sdr_settings->isSet())){
        toJsonValue(QString("rtlSdrSettings"), rtl_sdr_settings, obj, QString("SWGRtlSdrSettings"));
    }

    return obj;
}

QString*
SWGDeviceSettings::getDeviceHwType() {
    return device_hw_type;
}
void
SWGDeviceSettings::setDeviceHwType(QString* device_hw_type) {
    this->device_hw_type = device_hw_type;
    this->m_device_hw_type_isSet = true;
}

qint32
SWGDeviceSettings::getTx() {
    return tx;
}
void
SWGDeviceSettings::setTx(qint32 tx) {
    this->tx = tx;
    this->m_tx_isSet = true;
}

SWGAirspyHFSettings*
SWGDeviceSettings::getAirspyHfSettings() {
    return airspy_hf_settings;
}
void
SWGDeviceSettings::setAirspyHfSettings(SWGAirspyHFSettings* airspy_hf_settings) {
    this->airspy_hf_settings = airspy_hf_settings;
    this->m_airspy_hf_settings_isSet = true;
}

SWGFileSourceSettings*
SWGDeviceSettings::getFileSourceSettings() {
    return file_source_settings;
}
void
SWGDeviceSettings::setFileSourceSettings(SWGFileSourceSettings* file_source_settings) {
    this->file_source_settings = file_source_settings;
    this->m_file_source_settings_isSet = true;
}

SWGHackRFInputSettings*
SWGDeviceSettings::getHackRfInputSettings() {
    return hack_rf_input_settings;
}
void
SWGDeviceSettings::setHackRfInputSettings(SWGHackRFInputSettings* hack_rf_input_settings) {
    this->hack_rf_input_settings = hack_rf_input_settings;
    this->m_hack_rf_input_settings_isSet = true;
}

SWGHackRFOutputSettings*
SWGDeviceSettings::getHackRfOutputSettings() {
    return hack_rf_output_settings;
}
void
SWGDeviceSettings::setHackRfOutputSettings(SWGHackRFOutputSettings* hack_rf_output_settings) {
    this->hack_rf_output_settings = hack_rf_output_settings;
    this->m_hack_rf_output_settings_isSet = true;
}

SWGLimeSdrInputSettings*
SWGDeviceSettings::getLimeSdrInputSettings() {
    return lime_sdr_input_settings;
}
void
SWGDeviceSettings::setLimeSdrInputSettings(SWGLimeSdrInputSettings* lime_sdr_input_settings) {
    this->lime_sdr_input_settings = lime_sdr_input_settings;
    this->m_lime_sdr_input_settings_isSet = true;
}

SWGLimeSdrOutputSettings*
SWGDeviceSettings::getLimeSdrOutputSettings() {
    return lime_sdr_output_settings;
}
void
SWGDeviceSettings::setLimeSdrOutputSettings(SWGLimeSdrOutputSettings* lime_sdr_output_settings) {
    this->lime_sdr_output_settings = lime_sdr_output_settings;
    this->m_lime_sdr_output_settings_isSet = true;
}

SWGRtlSdrSettings*
SWGDeviceSettings::getRtlSdrSettings() {
    return rtl_sdr_settings;
}
void
SWGDeviceSettings::setRtlSdrSettings(SWGRtlSdrSettings* rtl_sdr_settings) {
    this->rtl_sdr_settings = rtl_sdr_settings;
    this->m_rtl_sdr_settings_isSet = true;
}


bool
SWGDeviceSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(device_hw_type != nullptr && *device_hw_type != QString("")){ isObjectUpdated = true; break;}
        if(m_tx_isSet){ isObjectUpdated = true; break;}
        if(airspy_hf_settings != nullptr && airspy_hf_settings->isSet()){ isObjectUpdated = true; break;}
        if(file_source_settings != nullptr && file_source_settings->isSet()){ isObjectUpdated = true; break;}
        if(hack_rf_input_settings != nullptr && hack_rf_input_settings->isSet()){ isObjectUpdated = true; break;}
        if(hack_rf_output_settings != nullptr && hack_rf_output_settings->isSet()){ isObjectUpdated = true; break;}
        if(lime_sdr_input_settings != nullptr && lime_sdr_input_settings->isSet()){ isObjectUpdated = true; break;}
        if(lime_sdr_output_settings != nullptr && lime_sdr_output_settings->isSet()){ isObjectUpdated = true; break;}
        if(rtl_sdr_settings != nullptr && rtl_sdr_settings->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

