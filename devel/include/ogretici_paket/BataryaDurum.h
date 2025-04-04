// Generated by gencpp from file ogretici_paket/BataryaDurum.msg
// DO NOT EDIT!


#ifndef OGRETICI_PAKET_MESSAGE_BATARYADURUM_H
#define OGRETICI_PAKET_MESSAGE_BATARYADURUM_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ogretici_paket
{
template <class ContainerAllocator>
struct BataryaDurum_
{
  typedef BataryaDurum_<ContainerAllocator> Type;

  BataryaDurum_()
    : batarya()  {
    }
  BataryaDurum_(const ContainerAllocator& _alloc)
    : batarya(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _batarya_type;
  _batarya_type batarya;





  typedef boost::shared_ptr< ::ogretici_paket::BataryaDurum_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ogretici_paket::BataryaDurum_<ContainerAllocator> const> ConstPtr;

}; // struct BataryaDurum_

typedef ::ogretici_paket::BataryaDurum_<std::allocator<void> > BataryaDurum;

typedef boost::shared_ptr< ::ogretici_paket::BataryaDurum > BataryaDurumPtr;
typedef boost::shared_ptr< ::ogretici_paket::BataryaDurum const> BataryaDurumConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ogretici_paket::BataryaDurum_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ogretici_paket::BataryaDurum_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ogretici_paket::BataryaDurum_<ContainerAllocator1> & lhs, const ::ogretici_paket::BataryaDurum_<ContainerAllocator2> & rhs)
{
  return lhs.batarya == rhs.batarya;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ogretici_paket::BataryaDurum_<ContainerAllocator1> & lhs, const ::ogretici_paket::BataryaDurum_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ogretici_paket

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ogretici_paket::BataryaDurum_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ogretici_paket::BataryaDurum_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ogretici_paket::BataryaDurum_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ogretici_paket::BataryaDurum_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ogretici_paket::BataryaDurum_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ogretici_paket::BataryaDurum_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ogretici_paket::BataryaDurum_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf2f5dfec1a5a686917c26b6ec537920";
  }

  static const char* value(const ::ogretici_paket::BataryaDurum_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf2f5dfec1a5a686ULL;
  static const uint64_t static_value2 = 0x917c26b6ec537920ULL;
};

template<class ContainerAllocator>
struct DataType< ::ogretici_paket::BataryaDurum_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ogretici_paket/BataryaDurum";
  }

  static const char* value(const ::ogretici_paket::BataryaDurum_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ogretici_paket::BataryaDurum_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string batarya \n"
;
  }

  static const char* value(const ::ogretici_paket::BataryaDurum_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ogretici_paket::BataryaDurum_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.batarya);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BataryaDurum_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ogretici_paket::BataryaDurum_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ogretici_paket::BataryaDurum_<ContainerAllocator>& v)
  {
    s << indent << "batarya: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.batarya);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OGRETICI_PAKET_MESSAGE_BATARYADURUM_H
