/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.2.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGDeviceReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDeviceReport::SWGDeviceReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDeviceReport::SWGDeviceReport() {
    device_hw_type = nullptr;
    m_device_hw_type_isSet = false;
    tx = 0;
    m_tx_isSet = false;
    airspy_report = nullptr;
    m_airspy_report_isSet = false;
    airspy_hf_report = nullptr;
    m_airspy_hf_report_isSet = false;
    blade_rf2_input_report = nullptr;
    m_blade_rf2_input_report_isSet = false;
    blade_rf2_output_report = nullptr;
    m_blade_rf2_output_report_isSet = false;
    file_source_report = nullptr;
    m_file_source_report_isSet = false;
    lime_sdr_input_report = nullptr;
    m_lime_sdr_input_report_isSet = false;
    lime_sdr_output_report = nullptr;
    m_lime_sdr_output_report_isSet = false;
    perseus_report = nullptr;
    m_perseus_report_isSet = false;
    pluto_sdr_input_report = nullptr;
    m_pluto_sdr_input_report_isSet = false;
    pluto_sdr_output_report = nullptr;
    m_pluto_sdr_output_report_isSet = false;
    rtl_sdr_report = nullptr;
    m_rtl_sdr_report_isSet = false;
    sdr_daemon_sink_report = nullptr;
    m_sdr_daemon_sink_report_isSet = false;
    sdr_daemon_source_report = nullptr;
    m_sdr_daemon_source_report_isSet = false;
    sdr_play_report = nullptr;
    m_sdr_play_report_isSet = false;
}

SWGDeviceReport::~SWGDeviceReport() {
    this->cleanup();
}

void
SWGDeviceReport::init() {
    device_hw_type = new QString("");
    m_device_hw_type_isSet = false;
    tx = 0;
    m_tx_isSet = false;
    airspy_report = new SWGAirspyReport();
    m_airspy_report_isSet = false;
    airspy_hf_report = new SWGAirspyHFReport();
    m_airspy_hf_report_isSet = false;
    blade_rf2_input_report = new SWGBladeRF2InputReport();
    m_blade_rf2_input_report_isSet = false;
    blade_rf2_output_report = new SWGBladeRF2OutputReport();
    m_blade_rf2_output_report_isSet = false;
    file_source_report = new SWGFileSourceReport();
    m_file_source_report_isSet = false;
    lime_sdr_input_report = new SWGLimeSdrInputReport();
    m_lime_sdr_input_report_isSet = false;
    lime_sdr_output_report = new SWGLimeSdrOutputReport();
    m_lime_sdr_output_report_isSet = false;
    perseus_report = new SWGPerseusReport();
    m_perseus_report_isSet = false;
    pluto_sdr_input_report = new SWGPlutoSdrInputReport();
    m_pluto_sdr_input_report_isSet = false;
    pluto_sdr_output_report = new SWGPlutoSdrOutputReport();
    m_pluto_sdr_output_report_isSet = false;
    rtl_sdr_report = new SWGRtlSdrReport();
    m_rtl_sdr_report_isSet = false;
    sdr_daemon_sink_report = new SWGSDRdaemonSinkReport();
    m_sdr_daemon_sink_report_isSet = false;
    sdr_daemon_source_report = new SWGSDRdaemonSourceReport();
    m_sdr_daemon_source_report_isSet = false;
    sdr_play_report = new SWGSDRPlayReport();
    m_sdr_play_report_isSet = false;
}

void
SWGDeviceReport::cleanup() {
    if(device_hw_type != nullptr) { 
        delete device_hw_type;
    }

    if(airspy_report != nullptr) { 
        delete airspy_report;
    }
    if(airspy_hf_report != nullptr) { 
        delete airspy_hf_report;
    }
    if(blade_rf2_input_report != nullptr) { 
        delete blade_rf2_input_report;
    }
    if(blade_rf2_output_report != nullptr) { 
        delete blade_rf2_output_report;
    }
    if(file_source_report != nullptr) { 
        delete file_source_report;
    }
    if(lime_sdr_input_report != nullptr) { 
        delete lime_sdr_input_report;
    }
    if(lime_sdr_output_report != nullptr) { 
        delete lime_sdr_output_report;
    }
    if(perseus_report != nullptr) { 
        delete perseus_report;
    }
    if(pluto_sdr_input_report != nullptr) { 
        delete pluto_sdr_input_report;
    }
    if(pluto_sdr_output_report != nullptr) { 
        delete pluto_sdr_output_report;
    }
    if(rtl_sdr_report != nullptr) { 
        delete rtl_sdr_report;
    }
    if(sdr_daemon_sink_report != nullptr) { 
        delete sdr_daemon_sink_report;
    }
    if(sdr_daemon_source_report != nullptr) { 
        delete sdr_daemon_source_report;
    }
    if(sdr_play_report != nullptr) { 
        delete sdr_play_report;
    }
}

SWGDeviceReport*
SWGDeviceReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDeviceReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&device_hw_type, pJson["deviceHwType"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&tx, pJson["tx"], "qint32", "");
    
    ::SWGSDRangel::setValue(&airspy_report, pJson["airspyReport"], "SWGAirspyReport", "SWGAirspyReport");
    
    ::SWGSDRangel::setValue(&airspy_hf_report, pJson["airspyHFReport"], "SWGAirspyHFReport", "SWGAirspyHFReport");
    
    ::SWGSDRangel::setValue(&blade_rf2_input_report, pJson["bladeRF2InputReport"], "SWGBladeRF2InputReport", "SWGBladeRF2InputReport");
    
    ::SWGSDRangel::setValue(&blade_rf2_output_report, pJson["bladeRF2OutputReport"], "SWGBladeRF2OutputReport", "SWGBladeRF2OutputReport");
    
    ::SWGSDRangel::setValue(&file_source_report, pJson["fileSourceReport"], "SWGFileSourceReport", "SWGFileSourceReport");
    
    ::SWGSDRangel::setValue(&lime_sdr_input_report, pJson["limeSdrInputReport"], "SWGLimeSdrInputReport", "SWGLimeSdrInputReport");
    
    ::SWGSDRangel::setValue(&lime_sdr_output_report, pJson["limeSdrOutputReport"], "SWGLimeSdrOutputReport", "SWGLimeSdrOutputReport");
    
    ::SWGSDRangel::setValue(&perseus_report, pJson["perseusReport"], "SWGPerseusReport", "SWGPerseusReport");
    
    ::SWGSDRangel::setValue(&pluto_sdr_input_report, pJson["plutoSdrInputReport"], "SWGPlutoSdrInputReport", "SWGPlutoSdrInputReport");
    
    ::SWGSDRangel::setValue(&pluto_sdr_output_report, pJson["plutoSdrOutputReport"], "SWGPlutoSdrOutputReport", "SWGPlutoSdrOutputReport");
    
    ::SWGSDRangel::setValue(&rtl_sdr_report, pJson["rtlSdrReport"], "SWGRtlSdrReport", "SWGRtlSdrReport");
    
    ::SWGSDRangel::setValue(&sdr_daemon_sink_report, pJson["sdrDaemonSinkReport"], "SWGSDRdaemonSinkReport", "SWGSDRdaemonSinkReport");
    
    ::SWGSDRangel::setValue(&sdr_daemon_source_report, pJson["sdrDaemonSourceReport"], "SWGSDRdaemonSourceReport", "SWGSDRdaemonSourceReport");
    
    ::SWGSDRangel::setValue(&sdr_play_report, pJson["sdrPlayReport"], "SWGSDRPlayReport", "SWGSDRPlayReport");
    
}

QString
SWGDeviceReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGDeviceReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(device_hw_type != nullptr && *device_hw_type != QString("")){
        toJsonValue(QString("deviceHwType"), device_hw_type, obj, QString("QString"));
    }
    if(m_tx_isSet){
        obj->insert("tx", QJsonValue(tx));
    }
    if((airspy_report != nullptr) && (airspy_report->isSet())){
        toJsonValue(QString("airspyReport"), airspy_report, obj, QString("SWGAirspyReport"));
    }
    if((airspy_hf_report != nullptr) && (airspy_hf_report->isSet())){
        toJsonValue(QString("airspyHFReport"), airspy_hf_report, obj, QString("SWGAirspyHFReport"));
    }
    if((blade_rf2_input_report != nullptr) && (blade_rf2_input_report->isSet())){
        toJsonValue(QString("bladeRF2InputReport"), blade_rf2_input_report, obj, QString("SWGBladeRF2InputReport"));
    }
    if((blade_rf2_output_report != nullptr) && (blade_rf2_output_report->isSet())){
        toJsonValue(QString("bladeRF2OutputReport"), blade_rf2_output_report, obj, QString("SWGBladeRF2OutputReport"));
    }
    if((file_source_report != nullptr) && (file_source_report->isSet())){
        toJsonValue(QString("fileSourceReport"), file_source_report, obj, QString("SWGFileSourceReport"));
    }
    if((lime_sdr_input_report != nullptr) && (lime_sdr_input_report->isSet())){
        toJsonValue(QString("limeSdrInputReport"), lime_sdr_input_report, obj, QString("SWGLimeSdrInputReport"));
    }
    if((lime_sdr_output_report != nullptr) && (lime_sdr_output_report->isSet())){
        toJsonValue(QString("limeSdrOutputReport"), lime_sdr_output_report, obj, QString("SWGLimeSdrOutputReport"));
    }
    if((perseus_report != nullptr) && (perseus_report->isSet())){
        toJsonValue(QString("perseusReport"), perseus_report, obj, QString("SWGPerseusReport"));
    }
    if((pluto_sdr_input_report != nullptr) && (pluto_sdr_input_report->isSet())){
        toJsonValue(QString("plutoSdrInputReport"), pluto_sdr_input_report, obj, QString("SWGPlutoSdrInputReport"));
    }
    if((pluto_sdr_output_report != nullptr) && (pluto_sdr_output_report->isSet())){
        toJsonValue(QString("plutoSdrOutputReport"), pluto_sdr_output_report, obj, QString("SWGPlutoSdrOutputReport"));
    }
    if((rtl_sdr_report != nullptr) && (rtl_sdr_report->isSet())){
        toJsonValue(QString("rtlSdrReport"), rtl_sdr_report, obj, QString("SWGRtlSdrReport"));
    }
    if((sdr_daemon_sink_report != nullptr) && (sdr_daemon_sink_report->isSet())){
        toJsonValue(QString("sdrDaemonSinkReport"), sdr_daemon_sink_report, obj, QString("SWGSDRdaemonSinkReport"));
    }
    if((sdr_daemon_source_report != nullptr) && (sdr_daemon_source_report->isSet())){
        toJsonValue(QString("sdrDaemonSourceReport"), sdr_daemon_source_report, obj, QString("SWGSDRdaemonSourceReport"));
    }
    if((sdr_play_report != nullptr) && (sdr_play_report->isSet())){
        toJsonValue(QString("sdrPlayReport"), sdr_play_report, obj, QString("SWGSDRPlayReport"));
    }

    return obj;
}

QString*
SWGDeviceReport::getDeviceHwType() {
    return device_hw_type;
}
void
SWGDeviceReport::setDeviceHwType(QString* device_hw_type) {
    this->device_hw_type = device_hw_type;
    this->m_device_hw_type_isSet = true;
}

qint32
SWGDeviceReport::getTx() {
    return tx;
}
void
SWGDeviceReport::setTx(qint32 tx) {
    this->tx = tx;
    this->m_tx_isSet = true;
}

SWGAirspyReport*
SWGDeviceReport::getAirspyReport() {
    return airspy_report;
}
void
SWGDeviceReport::setAirspyReport(SWGAirspyReport* airspy_report) {
    this->airspy_report = airspy_report;
    this->m_airspy_report_isSet = true;
}

SWGAirspyHFReport*
SWGDeviceReport::getAirspyHfReport() {
    return airspy_hf_report;
}
void
SWGDeviceReport::setAirspyHfReport(SWGAirspyHFReport* airspy_hf_report) {
    this->airspy_hf_report = airspy_hf_report;
    this->m_airspy_hf_report_isSet = true;
}

SWGBladeRF2InputReport*
SWGDeviceReport::getBladeRf2InputReport() {
    return blade_rf2_input_report;
}
void
SWGDeviceReport::setBladeRf2InputReport(SWGBladeRF2InputReport* blade_rf2_input_report) {
    this->blade_rf2_input_report = blade_rf2_input_report;
    this->m_blade_rf2_input_report_isSet = true;
}

SWGBladeRF2OutputReport*
SWGDeviceReport::getBladeRf2OutputReport() {
    return blade_rf2_output_report;
}
void
SWGDeviceReport::setBladeRf2OutputReport(SWGBladeRF2OutputReport* blade_rf2_output_report) {
    this->blade_rf2_output_report = blade_rf2_output_report;
    this->m_blade_rf2_output_report_isSet = true;
}

SWGFileSourceReport*
SWGDeviceReport::getFileSourceReport() {
    return file_source_report;
}
void
SWGDeviceReport::setFileSourceReport(SWGFileSourceReport* file_source_report) {
    this->file_source_report = file_source_report;
    this->m_file_source_report_isSet = true;
}

SWGLimeSdrInputReport*
SWGDeviceReport::getLimeSdrInputReport() {
    return lime_sdr_input_report;
}
void
SWGDeviceReport::setLimeSdrInputReport(SWGLimeSdrInputReport* lime_sdr_input_report) {
    this->lime_sdr_input_report = lime_sdr_input_report;
    this->m_lime_sdr_input_report_isSet = true;
}

SWGLimeSdrOutputReport*
SWGDeviceReport::getLimeSdrOutputReport() {
    return lime_sdr_output_report;
}
void
SWGDeviceReport::setLimeSdrOutputReport(SWGLimeSdrOutputReport* lime_sdr_output_report) {
    this->lime_sdr_output_report = lime_sdr_output_report;
    this->m_lime_sdr_output_report_isSet = true;
}

SWGPerseusReport*
SWGDeviceReport::getPerseusReport() {
    return perseus_report;
}
void
SWGDeviceReport::setPerseusReport(SWGPerseusReport* perseus_report) {
    this->perseus_report = perseus_report;
    this->m_perseus_report_isSet = true;
}

SWGPlutoSdrInputReport*
SWGDeviceReport::getPlutoSdrInputReport() {
    return pluto_sdr_input_report;
}
void
SWGDeviceReport::setPlutoSdrInputReport(SWGPlutoSdrInputReport* pluto_sdr_input_report) {
    this->pluto_sdr_input_report = pluto_sdr_input_report;
    this->m_pluto_sdr_input_report_isSet = true;
}

SWGPlutoSdrOutputReport*
SWGDeviceReport::getPlutoSdrOutputReport() {
    return pluto_sdr_output_report;
}
void
SWGDeviceReport::setPlutoSdrOutputReport(SWGPlutoSdrOutputReport* pluto_sdr_output_report) {
    this->pluto_sdr_output_report = pluto_sdr_output_report;
    this->m_pluto_sdr_output_report_isSet = true;
}

SWGRtlSdrReport*
SWGDeviceReport::getRtlSdrReport() {
    return rtl_sdr_report;
}
void
SWGDeviceReport::setRtlSdrReport(SWGRtlSdrReport* rtl_sdr_report) {
    this->rtl_sdr_report = rtl_sdr_report;
    this->m_rtl_sdr_report_isSet = true;
}

SWGSDRdaemonSinkReport*
SWGDeviceReport::getSdrDaemonSinkReport() {
    return sdr_daemon_sink_report;
}
void
SWGDeviceReport::setSdrDaemonSinkReport(SWGSDRdaemonSinkReport* sdr_daemon_sink_report) {
    this->sdr_daemon_sink_report = sdr_daemon_sink_report;
    this->m_sdr_daemon_sink_report_isSet = true;
}

SWGSDRdaemonSourceReport*
SWGDeviceReport::getSdrDaemonSourceReport() {
    return sdr_daemon_source_report;
}
void
SWGDeviceReport::setSdrDaemonSourceReport(SWGSDRdaemonSourceReport* sdr_daemon_source_report) {
    this->sdr_daemon_source_report = sdr_daemon_source_report;
    this->m_sdr_daemon_source_report_isSet = true;
}

SWGSDRPlayReport*
SWGDeviceReport::getSdrPlayReport() {
    return sdr_play_report;
}
void
SWGDeviceReport::setSdrPlayReport(SWGSDRPlayReport* sdr_play_report) {
    this->sdr_play_report = sdr_play_report;
    this->m_sdr_play_report_isSet = true;
}


bool
SWGDeviceReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(device_hw_type != nullptr && *device_hw_type != QString("")){ isObjectUpdated = true; break;}
        if(m_tx_isSet){ isObjectUpdated = true; break;}
        if(airspy_report != nullptr && airspy_report->isSet()){ isObjectUpdated = true; break;}
        if(airspy_hf_report != nullptr && airspy_hf_report->isSet()){ isObjectUpdated = true; break;}
        if(blade_rf2_input_report != nullptr && blade_rf2_input_report->isSet()){ isObjectUpdated = true; break;}
        if(blade_rf2_output_report != nullptr && blade_rf2_output_report->isSet()){ isObjectUpdated = true; break;}
        if(file_source_report != nullptr && file_source_report->isSet()){ isObjectUpdated = true; break;}
        if(lime_sdr_input_report != nullptr && lime_sdr_input_report->isSet()){ isObjectUpdated = true; break;}
        if(lime_sdr_output_report != nullptr && lime_sdr_output_report->isSet()){ isObjectUpdated = true; break;}
        if(perseus_report != nullptr && perseus_report->isSet()){ isObjectUpdated = true; break;}
        if(pluto_sdr_input_report != nullptr && pluto_sdr_input_report->isSet()){ isObjectUpdated = true; break;}
        if(pluto_sdr_output_report != nullptr && pluto_sdr_output_report->isSet()){ isObjectUpdated = true; break;}
        if(rtl_sdr_report != nullptr && rtl_sdr_report->isSet()){ isObjectUpdated = true; break;}
        if(sdr_daemon_sink_report != nullptr && sdr_daemon_sink_report->isSet()){ isObjectUpdated = true; break;}
        if(sdr_daemon_source_report != nullptr && sdr_daemon_source_report->isSet()){ isObjectUpdated = true; break;}
        if(sdr_play_report != nullptr && sdr_play_report->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

