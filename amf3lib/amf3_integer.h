#ifndef AMF3_INTEGER_H
#define AMF3_INTEGER_H

#include "amf3_type_base.h"

namespace AMF3
{
    class Integer : public TypeBase<TYPE_INTEGER>
    {
    public:
        Integer() : m_value(0)
        {
        }

        Integer(UInt32 value) : m_value(value)
        {
        }

        UInt32 GetInteger() const
        {
            return m_value;
        }

        inline bool operator==(UInt32 value) const
        {
            return m_value == value;
        }

        inline bool operator!=(UInt32 value) const
        {
            return !(*this == value);
        }

    private:
        UInt32 m_value;
    };

    OutStream& operator<<(OutStream& lhs, const Integer& rhs);
    InStream& operator>>(InStream& lhs, Integer& rhs);
}

#endif // AMF3_INTEGER_H
