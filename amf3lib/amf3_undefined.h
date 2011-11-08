#ifndef AMF3_UNDEFINED_H
#define AMF3_UNDEFINED_H

#include "amf3_datum.h"

namespace AMF3
{
    class Undefined : public IDatum
    {
    public:
        virtual void Serialize(OutStream& stream);
        virtual void Deserialize(InStream& stream);
   };
}

#endif // AMF3_UNDEFINED_H