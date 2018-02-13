#include "Interface/Resource/Exception.h"

namespace Interface {
namespace Resource {


    Exception::Exception(const std::string & type, const std::string & message, int statusCode)
        : _type(type),
          _message(message),
          _statusCode(statusCode)
    {}

    int Exception::code() const
    {
        return _statusCode;
    }

    std::string Exception::type() const
    {
        return _type;
    }

    std::string Exception::message() const
    {
        return _message;
    }


} }
