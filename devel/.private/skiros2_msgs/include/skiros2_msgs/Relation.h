// Generated by gencpp from file skiros2_msgs/Relation.msg
// DO NOT EDIT!


#ifndef SKIROS2_MSGS_MESSAGE_RELATION_H
#define SKIROS2_MSGS_MESSAGE_RELATION_H


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
struct Relation_
{
  typedef Relation_<ContainerAllocator> Type;

  Relation_()
    : subjectId()
    , predicate()
    , objectId()  {
    }
  Relation_(const ContainerAllocator& _alloc)
    : subjectId(_alloc)
    , predicate(_alloc)
    , objectId(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _subjectId_type;
  _subjectId_type subjectId;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _predicate_type;
  _predicate_type predicate;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _objectId_type;
  _objectId_type objectId;





  typedef boost::shared_ptr< ::skiros2_msgs::Relation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::skiros2_msgs::Relation_<ContainerAllocator> const> ConstPtr;

}; // struct Relation_

typedef ::skiros2_msgs::Relation_<std::allocator<void> > Relation;

typedef boost::shared_ptr< ::skiros2_msgs::Relation > RelationPtr;
typedef boost::shared_ptr< ::skiros2_msgs::Relation const> RelationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::skiros2_msgs::Relation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::skiros2_msgs::Relation_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::skiros2_msgs::Relation_<ContainerAllocator1> & lhs, const ::skiros2_msgs::Relation_<ContainerAllocator2> & rhs)
{
  return lhs.subjectId == rhs.subjectId &&
    lhs.predicate == rhs.predicate &&
    lhs.objectId == rhs.objectId;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::skiros2_msgs::Relation_<ContainerAllocator1> & lhs, const ::skiros2_msgs::Relation_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace skiros2_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::Relation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::Relation_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::Relation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::Relation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::Relation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::Relation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::skiros2_msgs::Relation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6596e75cd61663ae5bcc18bf41e43915";
  }

  static const char* value(const ::skiros2_msgs::Relation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6596e75cd61663aeULL;
  static const uint64_t static_value2 = 0x5bcc18bf41e43915ULL;
};

template<class ContainerAllocator>
struct DataType< ::skiros2_msgs::Relation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "skiros2_msgs/Relation";
  }

  static const char* value(const ::skiros2_msgs::Relation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::skiros2_msgs::Relation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string subjectId\n"
"string predicate\n"
"string objectId\n"
;
  }

  static const char* value(const ::skiros2_msgs::Relation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::skiros2_msgs::Relation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.subjectId);
      stream.next(m.predicate);
      stream.next(m.objectId);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Relation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::skiros2_msgs::Relation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::skiros2_msgs::Relation_<ContainerAllocator>& v)
  {
    s << indent << "subjectId: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.subjectId);
    s << indent << "predicate: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.predicate);
    s << indent << "objectId: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.objectId);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SKIROS2_MSGS_MESSAGE_RELATION_H
