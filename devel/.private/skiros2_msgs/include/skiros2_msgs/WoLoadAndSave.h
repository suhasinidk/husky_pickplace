// Generated by gencpp from file skiros2_msgs/WoLoadAndSave.msg
// DO NOT EDIT!


#ifndef SKIROS2_MSGS_MESSAGE_WOLOADANDSAVE_H
#define SKIROS2_MSGS_MESSAGE_WOLOADANDSAVE_H

#include <ros/service_traits.h>


#include <skiros2_msgs/WoLoadAndSaveRequest.h>
#include <skiros2_msgs/WoLoadAndSaveResponse.h>


namespace skiros2_msgs
{

struct WoLoadAndSave
{

typedef WoLoadAndSaveRequest Request;
typedef WoLoadAndSaveResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct WoLoadAndSave
} // namespace skiros2_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::skiros2_msgs::WoLoadAndSave > {
  static const char* value()
  {
    return "c662905d73fbee6703c2eda4c56b6502";
  }

  static const char* value(const ::skiros2_msgs::WoLoadAndSave&) { return value(); }
};

template<>
struct DataType< ::skiros2_msgs::WoLoadAndSave > {
  static const char* value()
  {
    return "skiros2_msgs/WoLoadAndSave";
  }

  static const char* value(const ::skiros2_msgs::WoLoadAndSave&) { return value(); }
};


// service_traits::MD5Sum< ::skiros2_msgs::WoLoadAndSaveRequest> should match
// service_traits::MD5Sum< ::skiros2_msgs::WoLoadAndSave >
template<>
struct MD5Sum< ::skiros2_msgs::WoLoadAndSaveRequest>
{
  static const char* value()
  {
    return MD5Sum< ::skiros2_msgs::WoLoadAndSave >::value();
  }
  static const char* value(const ::skiros2_msgs::WoLoadAndSaveRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::skiros2_msgs::WoLoadAndSaveRequest> should match
// service_traits::DataType< ::skiros2_msgs::WoLoadAndSave >
template<>
struct DataType< ::skiros2_msgs::WoLoadAndSaveRequest>
{
  static const char* value()
  {
    return DataType< ::skiros2_msgs::WoLoadAndSave >::value();
  }
  static const char* value(const ::skiros2_msgs::WoLoadAndSaveRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::skiros2_msgs::WoLoadAndSaveResponse> should match
// service_traits::MD5Sum< ::skiros2_msgs::WoLoadAndSave >
template<>
struct MD5Sum< ::skiros2_msgs::WoLoadAndSaveResponse>
{
  static const char* value()
  {
    return MD5Sum< ::skiros2_msgs::WoLoadAndSave >::value();
  }
  static const char* value(const ::skiros2_msgs::WoLoadAndSaveResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::skiros2_msgs::WoLoadAndSaveResponse> should match
// service_traits::DataType< ::skiros2_msgs::WoLoadAndSave >
template<>
struct DataType< ::skiros2_msgs::WoLoadAndSaveResponse>
{
  static const char* value()
  {
    return DataType< ::skiros2_msgs::WoLoadAndSave >::value();
  }
  static const char* value(const ::skiros2_msgs::WoLoadAndSaveResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SKIROS2_MSGS_MESSAGE_WOLOADANDSAVE_H