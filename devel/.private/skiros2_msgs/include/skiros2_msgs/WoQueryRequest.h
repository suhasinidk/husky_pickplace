// Generated by gencpp from file skiros2_msgs/WoQueryRequest.msg
// DO NOT EDIT!


#ifndef SKIROS2_MSGS_MESSAGE_WOQUERYREQUEST_H
#define SKIROS2_MSGS_MESSAGE_WOQUERYREQUEST_H


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
struct WoQueryRequest_
{
  typedef WoQueryRequest_<ContainerAllocator> Type;

  WoQueryRequest_()
    : query_string()
    , context()
    , cut_prefix(false)  {
    }
  WoQueryRequest_(const ContainerAllocator& _alloc)
    : query_string(_alloc)
    , context(_alloc)
    , cut_prefix(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _query_string_type;
  _query_string_type query_string;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _context_type;
  _context_type context;

   typedef uint8_t _cut_prefix_type;
  _cut_prefix_type cut_prefix;





  typedef boost::shared_ptr< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct WoQueryRequest_

typedef ::skiros2_msgs::WoQueryRequest_<std::allocator<void> > WoQueryRequest;

typedef boost::shared_ptr< ::skiros2_msgs::WoQueryRequest > WoQueryRequestPtr;
typedef boost::shared_ptr< ::skiros2_msgs::WoQueryRequest const> WoQueryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::skiros2_msgs::WoQueryRequest_<ContainerAllocator1> & lhs, const ::skiros2_msgs::WoQueryRequest_<ContainerAllocator2> & rhs)
{
  return lhs.query_string == rhs.query_string &&
    lhs.context == rhs.context &&
    lhs.cut_prefix == rhs.cut_prefix;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::skiros2_msgs::WoQueryRequest_<ContainerAllocator1> & lhs, const ::skiros2_msgs::WoQueryRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace skiros2_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c6bf0050b43eab21fbaf5842a4df0749";
  }

  static const char* value(const ::skiros2_msgs::WoQueryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc6bf0050b43eab21ULL;
  static const uint64_t static_value2 = 0xfbaf5842a4df0749ULL;
};

template<class ContainerAllocator>
struct DataType< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "skiros2_msgs/WoQueryRequest";
  }

  static const char* value(const ::skiros2_msgs::WoQueryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#World Ontology query message\n"
"#Std Owl query (use SPARQL syntax, e.g. \"SELECT ?x WHERE { ?x rdf:type stmn:GraspingPose. }\")\n"
"string query_string\n"
"string context\n"
"bool cut_prefix\n"
;
  }

  static const char* value(const ::skiros2_msgs::WoQueryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.query_string);
      stream.next(m.context);
      stream.next(m.cut_prefix);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WoQueryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::skiros2_msgs::WoQueryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::skiros2_msgs::WoQueryRequest_<ContainerAllocator>& v)
  {
    s << indent << "query_string: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.query_string);
    s << indent << "context: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.context);
    s << indent << "cut_prefix: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cut_prefix);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SKIROS2_MSGS_MESSAGE_WOQUERYREQUEST_H
