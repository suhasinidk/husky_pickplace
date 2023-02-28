// Generated by gencpp from file skiros2_msgs/SkillCommandRequest.msg
// DO NOT EDIT!


#ifndef SKIROS2_MSGS_MESSAGE_SKILLCOMMANDREQUEST_H
#define SKIROS2_MSGS_MESSAGE_SKILLCOMMANDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <skiros2_msgs/ResourceDescription.h>

namespace skiros2_msgs
{
template <class ContainerAllocator>
struct SkillCommandRequest_
{
  typedef SkillCommandRequest_<ContainerAllocator> Type;

  SkillCommandRequest_()
    : author()
    , action()
    , execution_id(0)
    , skills()  {
    }
  SkillCommandRequest_(const ContainerAllocator& _alloc)
    : author(_alloc)
    , action(_alloc)
    , execution_id(0)
    , skills(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _author_type;
  _author_type author;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _action_type;
  _action_type action;

   typedef int16_t _execution_id_type;
  _execution_id_type execution_id;

   typedef std::vector< ::skiros2_msgs::ResourceDescription_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::skiros2_msgs::ResourceDescription_<ContainerAllocator> >> _skills_type;
  _skills_type skills;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(START)
  #undef START
#endif
#if defined(_WIN32) && defined(PAUSE)
  #undef PAUSE
#endif
#if defined(_WIN32) && defined(PREEMPT)
  #undef PREEMPT
#endif
#if defined(_WIN32) && defined(TICK_ONCE)
  #undef TICK_ONCE
#endif


  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> START;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> PAUSE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> PREEMPT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TICK_ONCE;

  typedef boost::shared_ptr< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SkillCommandRequest_

typedef ::skiros2_msgs::SkillCommandRequest_<std::allocator<void> > SkillCommandRequest;

typedef boost::shared_ptr< ::skiros2_msgs::SkillCommandRequest > SkillCommandRequestPtr;
typedef boost::shared_ptr< ::skiros2_msgs::SkillCommandRequest const> SkillCommandRequestConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      SkillCommandRequest_<ContainerAllocator>::START =
        
          "start"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      SkillCommandRequest_<ContainerAllocator>::PAUSE =
        
          "pause"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      SkillCommandRequest_<ContainerAllocator>::PREEMPT =
        
          "preempt"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      SkillCommandRequest_<ContainerAllocator>::TICK_ONCE =
        
          "tick_once"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator1> & lhs, const ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator2> & rhs)
{
  return lhs.author == rhs.author &&
    lhs.action == rhs.action &&
    lhs.execution_id == rhs.execution_id &&
    lhs.skills == rhs.skills;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator1> & lhs, const ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace skiros2_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9107465980fa919ff27238186f101996";
  }

  static const char* value(const ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9107465980fa919fULL;
  static const uint64_t static_value2 = 0xf27238186f101996ULL;
};

template<class ContainerAllocator>
struct DataType< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "skiros2_msgs/SkillCommandRequest";
  }

  static const char* value(const ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Possible actions\n"
"string START=start\n"
"string PAUSE=pause\n"
"string PREEMPT=preempt\n"
"string TICK_ONCE=tick_once\n"
"\n"
"string author 			            #Author of the action\n"
"string action				            #Action to perform\n"
"int16 execution_id\n"
"ResourceDescription[] skills\n"
"\n"
"================================================================================\n"
"MSG: skiros2_msgs/ResourceDescription\n"
"string type\n"
"string name\n"
"Param[] params\n"
"\n"
"================================================================================\n"
"MSG: skiros2_msgs/Param\n"
"string param\n"
;
  }

  static const char* value(const ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.author);
      stream.next(m.action);
      stream.next(m.execution_id);
      stream.next(m.skills);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SkillCommandRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::skiros2_msgs::SkillCommandRequest_<ContainerAllocator>& v)
  {
    s << indent << "author: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.author);
    s << indent << "action: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.action);
    s << indent << "execution_id: ";
    Printer<int16_t>::stream(s, indent + "  ", v.execution_id);
    s << indent << "skills[]" << std::endl;
    for (size_t i = 0; i < v.skills.size(); ++i)
    {
      s << indent << "  skills[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::skiros2_msgs::ResourceDescription_<ContainerAllocator> >::stream(s, indent + "    ", v.skills[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SKIROS2_MSGS_MESSAGE_SKILLCOMMANDREQUEST_H