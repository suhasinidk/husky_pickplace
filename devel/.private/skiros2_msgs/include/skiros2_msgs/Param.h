// Generated by gencpp from file skiros2_msgs/Param.msg
// DO NOT EDIT!


#ifndef SKIROS2_MSGS_MESSAGE_PARAM_H
#define SKIROS2_MSGS_MESSAGE_PARAM_H


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
struct Param_
{
  typedef Param_<ContainerAllocator> Type;

  Param_()
    : param()  {
    }
  Param_(const ContainerAllocator& _alloc)
    : param(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _param_type;
  _param_type param;





  typedef boost::shared_ptr< ::skiros2_msgs::Param_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::skiros2_msgs::Param_<ContainerAllocator> const> ConstPtr;

}; // struct Param_

typedef ::skiros2_msgs::Param_<std::allocator<void> > Param;

typedef boost::shared_ptr< ::skiros2_msgs::Param > ParamPtr;
typedef boost::shared_ptr< ::skiros2_msgs::Param const> ParamConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::skiros2_msgs::Param_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::skiros2_msgs::Param_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::skiros2_msgs::Param_<ContainerAllocator1> & lhs, const ::skiros2_msgs::Param_<ContainerAllocator2> & rhs)
{
  return lhs.param == rhs.param;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::skiros2_msgs::Param_<ContainerAllocator1> & lhs, const ::skiros2_msgs::Param_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace skiros2_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::Param_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::Param_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::Param_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::Param_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::Param_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::Param_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::skiros2_msgs::Param_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb04b7504512676dca105ab8842899a4";
  }

  static const char* value(const ::skiros2_msgs::Param_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb04b7504512676dULL;
  static const uint64_t static_value2 = 0xca105ab8842899a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::skiros2_msgs::Param_<ContainerAllocator> >
{
  static const char* value()
  {
    return "skiros2_msgs/Param";
  }

  static const char* value(const ::skiros2_msgs::Param_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::skiros2_msgs::Param_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string param\n"
;
  }

  static const char* value(const ::skiros2_msgs::Param_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::skiros2_msgs::Param_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.param);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Param_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::skiros2_msgs::Param_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::skiros2_msgs::Param_<ContainerAllocator>& v)
  {
    s << indent << "param: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.param);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SKIROS2_MSGS_MESSAGE_PARAM_H
