/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 5.9.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGUSRPOutputReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGUSRPOutputReport::SWGUSRPOutputReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUSRPOutputReport::SWGUSRPOutputReport() {
    success = 0;
    m_success_isSet = false;
    stream_active = 0;
    m_stream_active_isSet = false;
    underrun_count = 0;
    m_underrun_count_isSet = false;
    dropped_packets_count = 0;
    m_dropped_packets_count_isSet = false;
}

SWGUSRPOutputReport::~SWGUSRPOutputReport() {
    this->cleanup();
}

void
SWGUSRPOutputReport::init() {
    success = 0;
    m_success_isSet = false;
    stream_active = 0;
    m_stream_active_isSet = false;
    underrun_count = 0;
    m_underrun_count_isSet = false;
    dropped_packets_count = 0;
    m_dropped_packets_count_isSet = false;
}

void
SWGUSRPOutputReport::cleanup() {




}

SWGUSRPOutputReport*
SWGUSRPOutputReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUSRPOutputReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&success, pJson["success"], "qint32", "");
    
    ::SWGSDRangel::setValue(&stream_active, pJson["streamActive"], "qint32", "");
    
    ::SWGSDRangel::setValue(&underrun_count, pJson["underrunCount"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dropped_packets_count, pJson["droppedPacketsCount"], "qint32", "");
    
}

QString
SWGUSRPOutputReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGUSRPOutputReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_success_isSet){
        obj->insert("success", QJsonValue(success));
    }
    if(m_stream_active_isSet){
        obj->insert("streamActive", QJsonValue(stream_active));
    }
    if(m_underrun_count_isSet){
        obj->insert("underrunCount", QJsonValue(underrun_count));
    }
    if(m_dropped_packets_count_isSet){
        obj->insert("droppedPacketsCount", QJsonValue(dropped_packets_count));
    }

    return obj;
}

qint32
SWGUSRPOutputReport::getSuccess() {
    return success;
}
void
SWGUSRPOutputReport::setSuccess(qint32 success) {
    this->success = success;
    this->m_success_isSet = true;
}

qint32
SWGUSRPOutputReport::getStreamActive() {
    return stream_active;
}
void
SWGUSRPOutputReport::setStreamActive(qint32 stream_active) {
    this->stream_active = stream_active;
    this->m_stream_active_isSet = true;
}

qint32
SWGUSRPOutputReport::getUnderrunCount() {
    return underrun_count;
}
void
SWGUSRPOutputReport::setUnderrunCount(qint32 underrun_count) {
    this->underrun_count = underrun_count;
    this->m_underrun_count_isSet = true;
}

qint32
SWGUSRPOutputReport::getDroppedPacketsCount() {
    return dropped_packets_count;
}
void
SWGUSRPOutputReport::setDroppedPacketsCount(qint32 dropped_packets_count) {
    this->dropped_packets_count = dropped_packets_count;
    this->m_dropped_packets_count_isSet = true;
}


bool
SWGUSRPOutputReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_success_isSet){
            isObjectUpdated = true; break;
        }
        if(m_stream_active_isSet){
            isObjectUpdated = true; break;
        }
        if(m_underrun_count_isSet){
            isObjectUpdated = true; break;
        }
        if(m_dropped_packets_count_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

