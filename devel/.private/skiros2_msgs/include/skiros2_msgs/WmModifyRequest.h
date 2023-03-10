// Generated by gencpp from file skiros2_msgs/WmModifyRequest.msg
// DO NOT EDIT!


#ifndef SKIROS2_MSGS_MESSAGE_WMMODIFYREQUEST_H
#define SKIROS2_MSGS_MESSAGE_WMMODIFYREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <skiros2_msgs/WmElement.h>

namespace skiros2_msgs
{
template <class ContainerAllocator>
struct WmModifyRequest_
{
  typedef WmModifyRequest_<ContainerAllocator> Type;

  WmModifyRequest_()
    : author()
    , action()
    , relation_filter()
    , type_filter()
    , context()
    , elements()  {
    }
  WmModifyRequest_(const ContainerAllocator& _alloc)
    : author(_alloc)
    , action(_alloc)
    , relation_filter(_alloc)
    , type_filter(_alloc)
    , context(_alloc)
    , elements(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _author_type;
  _author_type author;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _action_type;
  _action_type action;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _relation_filter_type;
  _relation_filter_type relation_filter;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _type_filter_type;
  _type_filter_type type_filter;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _context_type;
  _context_type context;

   typedef std::vector< ::skiros2_msgs::WmElement_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::skiros2_msgs::WmElement_<ContainerAllocator> >> _elements_type;
  _elements_type elements;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(ADD)
  #undef ADD
#endif
#if defined(_WIN32) && defined(UPDATE)
  #undef UPDATE
#endif
#if defined(_WIN32) && defined(UPDATE_PROPERTIES)
  #undef UPDATE_PROPERTIES
#endif
#if defined(_WIN32) && defined(REMOVE)
  #undef REMOVE
#endif
#if defined(_WIN32) && defined(REMOVE_RECURSIVE)
  #undef REMOVE_RECURSIVE
#endif


  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ADD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> UPDATE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> UPDATE_PROPERTIES;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> REMOVE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> REMOVE_RECURSIVE;

  typedef boost::shared_ptr< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> const> ConstPtr;

}; // struct WmModifyRequest_

typedef ::skiros2_msgs::WmModifyRequest_<std::allocator<void> > WmModifyRequest;

typedef boost::shared_ptr< ::skiros2_msgs::WmModifyRequest > WmModifyRequestPtr;
typedef boost::shared_ptr< ::skiros2_msgs::WmModifyRequest const> WmModifyRequestConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      WmModifyRequest_<ContainerAllocator>::ADD =
        
          "add"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      WmModifyRequest_<ContainerAllocator>::UPDATE =
        
          "update"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      WmModifyRequest_<ContainerAllocator>::UPDATE_PROPERTIES =
        
          "update_properties"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      WmModifyRequest_<ContainerAllocator>::REMOVE =
        
          "remove"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      WmModifyRequest_<ContainerAllocator>::REMOVE_RECURSIVE =
        
          "remove_recursive"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::skiros2_msgs::WmModifyRequest_<ContainerAllocator1> & lhs, const ::skiros2_msgs::WmModifyRequest_<ContainerAllocator2> & rhs)
{
  return lhs.author == rhs.author &&
    lhs.action == rhs.action &&
    lhs.relation_filter == rhs.relation_filter &&
    lhs.type_filter == rhs.type_filter &&
    lhs.context == rhs.context &&
    lhs.elements == rhs.elements;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::skiros2_msgs::WmModifyRequest_<ContainerAllocator1> & lhs, const ::skiros2_msgs::WmModifyRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace skiros2_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b72f32988161c8ca4acc2b375fb1954";
  }

  static const char* value(const ::skiros2_msgs::WmModifyRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1b72f32988161c8cULL;
  static const uint64_t static_value2 = 0xa4acc2b375fb1954ULL;
};

template<class ContainerAllocator>
struct DataType< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "skiros2_msgs/WmModifyRequest";
  }

  static const char* value(const ::skiros2_msgs::WmModifyRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Possible actions\n"
"string ADD=add\n"
"string UPDATE=update\n"
"string UPDATE_PROPERTIES=update_properties\n"
"string REMOVE=remove\n"
"string REMOVE_RECURSIVE=remove_recursive\n"
"\n"
"string author\n"
"string action\n"
"string relation_filter\n"
"string type_filter\n"
"string context\n"
"WmElement[] elements\n"
"\n"
"================================================================================\n"
"MSG: skiros2_msgs/WmElement\n"
"string id\n"
"string type\n"
"string label\n"
"Property[] properties\n"
"Relation[] relations\n"
"\n"
"================================================================================\n"
"MSG: skiros2_msgs/Property\n"
"string key\n"
"string dataValue\n"
"string dataType\n"
"\n"
"================================================================================\n"
"MSG: skiros2_msgs/Relation\n"
"string subjectId\n"
"string predicate\n"
"string objectId\n"
;
  }

  static const char* value(const ::skiros2_msgs::WmModifyRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.author);
      stream.next(m.action);
      stream.next(m.relation_filter);
      stream.next(m.type_filter);
      stream.next(m.context);
      stream.next(m.elements);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WmModifyRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::skiros2_msgs::WmModifyRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::skiros2_msgs::WmModifyRequest_<ContainerAllocator>& v)
  {
    s << indent << "author: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.author);
    s << indent << "action: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.action);
    s << indent << "relation_filter: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.relation_filter);
    s << indent << "type_filter: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type_filter);
    s << indent << "context: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.context);
    s << indent << "elements[]" << std::endl;
    for (size_t i = 0; i < v.elements.size(); ++i)
    {
      s << indent << "  elements[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::skiros2_msgs::WmElement_<ContainerAllocator> >::stream(s, indent + "    ", v.elements[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SKIROS2_MSGS_MESSAGE_WMMODIFYREQUEST_H
