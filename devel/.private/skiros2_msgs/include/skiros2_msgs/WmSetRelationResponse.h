// Generated by gencpp from file skiros2_msgs/WmSetRelationResponse.msg
// DO NOT EDIT!


#ifndef SKIROS2_MSGS_MESSAGE_WMSETRELATIONRESPONSE_H
#define SKIROS2_MSGS_MESSAGE_WMSETRELATIONRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace skiros2_msgs
{
template <class ContainerAllocator>
struct WmSetRelationResponse_
{
  typedef WmSetRelationResponse_<ContainerAllocator> Type;

  WmSetRelationResponse_()
    : ok(false)  {
    }
  WmSetRelationResponse_(const ContainerAllocator& _alloc)
    : ok(false)  {
  (void)_alloc;
    }



   typedef uint8_t _ok_type;
  _ok_type ok;





  typedef boost::shared_ptr< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct WmSetRelationResponse_

typedef ::skiros2_msgs::WmSetRelationResponse_<std::allocator<void> > WmSetRelationResponse;

typedef boost::shared_ptr< ::skiros2_msgs::WmSetRelationResponse > WmSetRelationResponsePtr;
typedef boost::shared_ptr< ::skiros2_msgs::WmSetRelationResponse const> WmSetRelationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator1> & lhs, const ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.ok == rhs.ok;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator1> & lhs, const ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace skiros2_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f6da3883749771fac40d6deb24a8c02";
  }

  static const char* value(const ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f6da3883749771fULL;
  static const uint64_t static_value2 = 0xac40d6deb24a8c02ULL;
};

template<class ContainerAllocator>
struct DataType< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "skiros2_msgs/WmSetRelationResponse";
  }

  static const char* value(const ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ok\n"
"\n"
;
  }

  static const char* value(const ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ok);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WmSetRelationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::skiros2_msgs::WmSetRelationResponse_<ContainerAllocator>& v)
  {
    s << indent << "ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ok);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SKIROS2_MSGS_MESSAGE_WMSETRELATIONRESPONSE_H
