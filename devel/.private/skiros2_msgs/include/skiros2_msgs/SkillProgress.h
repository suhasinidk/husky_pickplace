// Generated by gencpp from file skiros2_msgs/SkillProgress.msg
// DO NOT EDIT!


#ifndef SKIROS2_MSGS_MESSAGE_SKILLPROGRESS_H
#define SKIROS2_MSGS_MESSAGE_SKILLPROGRESS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <skiros2_msgs/Param.h>

namespace skiros2_msgs
{
template <class ContainerAllocator>
struct SkillProgress_
{
  typedef SkillProgress_<ContainerAllocator> Type;

  SkillProgress_()
    : robot()
    , task_id(0)
    , id(0)
    , parent_label()
    , parent_id(0)
    , type()
    , label()
    , params()
    , processor()
    , state(0)
    , progress_code(0)
    , progress_period(0.0)
    , progress_time(0.0)
    , progress_message()  {
    }
  SkillProgress_(const ContainerAllocator& _alloc)
    : robot(_alloc)
    , task_id(0)
    , id(0)
    , parent_label(_alloc)
    , parent_id(0)
    , type(_alloc)
    , label(_alloc)
    , params(_alloc)
    , processor(_alloc)
    , state(0)
    , progress_code(0)
    , progress_period(0.0)
    , progress_time(0.0)
    , progress_message(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _robot_type;
  _robot_type robot;

   typedef int16_t _task_id_type;
  _task_id_type task_id;

   typedef int16_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _parent_label_type;
  _parent_label_type parent_label;

   typedef int16_t _parent_id_type;
  _parent_id_type parent_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _type_type;
  _type_type type;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _label_type;
  _label_type label;

   typedef std::vector< ::skiros2_msgs::Param_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::skiros2_msgs::Param_<ContainerAllocator> >> _params_type;
  _params_type params;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _processor_type;
  _processor_type processor;

   typedef int16_t _state_type;
  _state_type state;

   typedef int16_t _progress_code_type;
  _progress_code_type progress_code;

   typedef float _progress_period_type;
  _progress_period_type progress_period;

   typedef float _progress_time_type;
  _progress_time_type progress_time;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _progress_message_type;
  _progress_message_type progress_message;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SUCCESS)
  #undef SUCCESS
#endif
#if defined(_WIN32) && defined(FAILURE)
  #undef FAILURE
#endif
#if defined(_WIN32) && defined(RUNNING)
  #undef RUNNING
#endif
#if defined(_WIN32) && defined(IDLE)
  #undef IDLE
#endif

  enum {
    SUCCESS = 1,
    FAILURE = 2,
    RUNNING = 3,
    IDLE = 4,
  };


  typedef boost::shared_ptr< ::skiros2_msgs::SkillProgress_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::skiros2_msgs::SkillProgress_<ContainerAllocator> const> ConstPtr;

}; // struct SkillProgress_

typedef ::skiros2_msgs::SkillProgress_<std::allocator<void> > SkillProgress;

typedef boost::shared_ptr< ::skiros2_msgs::SkillProgress > SkillProgressPtr;
typedef boost::shared_ptr< ::skiros2_msgs::SkillProgress const> SkillProgressConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::skiros2_msgs::SkillProgress_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::skiros2_msgs::SkillProgress_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::skiros2_msgs::SkillProgress_<ContainerAllocator1> & lhs, const ::skiros2_msgs::SkillProgress_<ContainerAllocator2> & rhs)
{
  return lhs.robot == rhs.robot &&
    lhs.task_id == rhs.task_id &&
    lhs.id == rhs.id &&
    lhs.parent_label == rhs.parent_label &&
    lhs.parent_id == rhs.parent_id &&
    lhs.type == rhs.type &&
    lhs.label == rhs.label &&
    lhs.params == rhs.params &&
    lhs.processor == rhs.processor &&
    lhs.state == rhs.state &&
    lhs.progress_code == rhs.progress_code &&
    lhs.progress_period == rhs.progress_period &&
    lhs.progress_time == rhs.progress_time &&
    lhs.progress_message == rhs.progress_message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::skiros2_msgs::SkillProgress_<ContainerAllocator1> & lhs, const ::skiros2_msgs::SkillProgress_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace skiros2_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::SkillProgress_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::skiros2_msgs::SkillProgress_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::SkillProgress_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::skiros2_msgs::SkillProgress_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::SkillProgress_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::skiros2_msgs::SkillProgress_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::skiros2_msgs::SkillProgress_<ContainerAllocator> >
{
  static const char* value()
  {
    return "14c02d9b9938298cf43e256d5d334a4c";
  }

  static const char* value(const ::skiros2_msgs::SkillProgress_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x14c02d9b9938298cULL;
  static const uint64_t static_value2 = 0xf43e256d5d334a4cULL;
};

template<class ContainerAllocator>
struct DataType< ::skiros2_msgs::SkillProgress_<ContainerAllocator> >
{
  static const char* value()
  {
    return "skiros2_msgs/SkillProgress";
  }

  static const char* value(const ::skiros2_msgs::SkillProgress_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::skiros2_msgs::SkillProgress_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Possible states\n"
"int16 SUCCESS=1\n"
"int16 FAILURE=2\n"
"int16 RUNNING=3\n"
"int16 IDLE=4\n"
"\n"
"string robot\n"
"int16 task_id\n"
"int16 id\n"
"string parent_label\n"
"int16 parent_id\n"
"string type\n"
"string label\n"
"Param[] params\n"
"string processor\n"
"int16 state\n"
"int16 progress_code\n"
"float32 progress_period\n"
"float32 progress_time\n"
"string progress_message\n"
"\n"
"================================================================================\n"
"MSG: skiros2_msgs/Param\n"
"string param\n"
;
  }

  static const char* value(const ::skiros2_msgs::SkillProgress_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::skiros2_msgs::SkillProgress_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.robot);
      stream.next(m.task_id);
      stream.next(m.id);
      stream.next(m.parent_label);
      stream.next(m.parent_id);
      stream.next(m.type);
      stream.next(m.label);
      stream.next(m.params);
      stream.next(m.processor);
      stream.next(m.state);
      stream.next(m.progress_code);
      stream.next(m.progress_period);
      stream.next(m.progress_time);
      stream.next(m.progress_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SkillProgress_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::skiros2_msgs::SkillProgress_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::skiros2_msgs::SkillProgress_<ContainerAllocator>& v)
  {
    s << indent << "robot: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.robot);
    s << indent << "task_id: ";
    Printer<int16_t>::stream(s, indent + "  ", v.task_id);
    s << indent << "id: ";
    Printer<int16_t>::stream(s, indent + "  ", v.id);
    s << indent << "parent_label: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.parent_label);
    s << indent << "parent_id: ";
    Printer<int16_t>::stream(s, indent + "  ", v.parent_id);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type);
    s << indent << "label: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.label);
    s << indent << "params[]" << std::endl;
    for (size_t i = 0; i < v.params.size(); ++i)
    {
      s << indent << "  params[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::skiros2_msgs::Param_<ContainerAllocator> >::stream(s, indent + "    ", v.params[i]);
    }
    s << indent << "processor: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.processor);
    s << indent << "state: ";
    Printer<int16_t>::stream(s, indent + "  ", v.state);
    s << indent << "progress_code: ";
    Printer<int16_t>::stream(s, indent + "  ", v.progress_code);
    s << indent << "progress_period: ";
    Printer<float>::stream(s, indent + "  ", v.progress_period);
    s << indent << "progress_time: ";
    Printer<float>::stream(s, indent + "  ", v.progress_time);
    s << indent << "progress_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.progress_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SKIROS2_MSGS_MESSAGE_SKILLPROGRESS_H
