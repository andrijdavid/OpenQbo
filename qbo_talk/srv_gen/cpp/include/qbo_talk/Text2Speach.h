/* Auto-generated by genmsg_cpp for file /opt/ros/hydro/stacks/qbo_talk/srv/Text2Speach.srv */
#ifndef QBO_TALK_SERVICE_TEXT2SPEACH_H
#define QBO_TALK_SERVICE_TEXT2SPEACH_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace qbo_talk
{
template <class ContainerAllocator>
struct Text2SpeachRequest_ {
  typedef Text2SpeachRequest_<ContainerAllocator> Type;

  Text2SpeachRequest_()
  : command()
  {
  }

  Text2SpeachRequest_(const ContainerAllocator& _alloc)
  : command(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  command;


  typedef boost::shared_ptr< ::qbo_talk::Text2SpeachRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qbo_talk::Text2SpeachRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Text2SpeachRequest
typedef  ::qbo_talk::Text2SpeachRequest_<std::allocator<void> > Text2SpeachRequest;

typedef boost::shared_ptr< ::qbo_talk::Text2SpeachRequest> Text2SpeachRequestPtr;
typedef boost::shared_ptr< ::qbo_talk::Text2SpeachRequest const> Text2SpeachRequestConstPtr;



template <class ContainerAllocator>
struct Text2SpeachResponse_ {
  typedef Text2SpeachResponse_<ContainerAllocator> Type;

  Text2SpeachResponse_()
  : result(false)
  {
  }

  Text2SpeachResponse_(const ContainerAllocator& _alloc)
  : result(false)
  {
  }

  typedef uint8_t _result_type;
  uint8_t result;


  typedef boost::shared_ptr< ::qbo_talk::Text2SpeachResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qbo_talk::Text2SpeachResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Text2SpeachResponse
typedef  ::qbo_talk::Text2SpeachResponse_<std::allocator<void> > Text2SpeachResponse;

typedef boost::shared_ptr< ::qbo_talk::Text2SpeachResponse> Text2SpeachResponsePtr;
typedef boost::shared_ptr< ::qbo_talk::Text2SpeachResponse const> Text2SpeachResponseConstPtr;


struct Text2Speach
{

typedef Text2SpeachRequest Request;
typedef Text2SpeachResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Text2Speach
} // namespace qbo_talk

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::qbo_talk::Text2SpeachRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::qbo_talk::Text2SpeachRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::qbo_talk::Text2SpeachRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cba5e21e920a3a2b7b375cb65b64cdea";
  }

  static const char* value(const  ::qbo_talk::Text2SpeachRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xcba5e21e920a3a2bULL;
  static const uint64_t static_value2 = 0x7b375cb65b64cdeaULL;
};

template<class ContainerAllocator>
struct DataType< ::qbo_talk::Text2SpeachRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_talk/Text2SpeachRequest";
  }

  static const char* value(const  ::qbo_talk::Text2SpeachRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::qbo_talk::Text2SpeachRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
string command\n\
\n\
";
  }

  static const char* value(const  ::qbo_talk::Text2SpeachRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::qbo_talk::Text2SpeachResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::qbo_talk::Text2SpeachResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::qbo_talk::Text2SpeachResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const  ::qbo_talk::Text2SpeachResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::qbo_talk::Text2SpeachResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_talk/Text2SpeachResponse";
  }

  static const char* value(const  ::qbo_talk::Text2SpeachResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::qbo_talk::Text2SpeachResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool result\n\
\n\
\n\
";
  }

  static const char* value(const  ::qbo_talk::Text2SpeachResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::qbo_talk::Text2SpeachResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::qbo_talk::Text2SpeachRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.command);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Text2SpeachRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::qbo_talk::Text2SpeachResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Text2SpeachResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<qbo_talk::Text2Speach> {
  static const char* value() 
  {
    return "2fb3aa2736d70ecbfc297d3d9b879661";
  }

  static const char* value(const qbo_talk::Text2Speach&) { return value(); } 
};

template<>
struct DataType<qbo_talk::Text2Speach> {
  static const char* value() 
  {
    return "qbo_talk/Text2Speach";
  }

  static const char* value(const qbo_talk::Text2Speach&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<qbo_talk::Text2SpeachRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2fb3aa2736d70ecbfc297d3d9b879661";
  }

  static const char* value(const qbo_talk::Text2SpeachRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<qbo_talk::Text2SpeachRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_talk/Text2Speach";
  }

  static const char* value(const qbo_talk::Text2SpeachRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<qbo_talk::Text2SpeachResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2fb3aa2736d70ecbfc297d3d9b879661";
  }

  static const char* value(const qbo_talk::Text2SpeachResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<qbo_talk::Text2SpeachResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_talk/Text2Speach";
  }

  static const char* value(const qbo_talk::Text2SpeachResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // QBO_TALK_SERVICE_TEXT2SPEACH_H