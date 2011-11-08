#ifndef AMF3_INTEGER_H
#define AMF3_INTEGER_H

#include "amf3_type.h"
#include "amf3_defs.h"

namespace AMF3
{
    // Serialization: U29 if possible, double otherwise
    class Integer : public IType
    {
    public:
        Integer(UInt32 value) : m_value(value)
        {
        }

        UInt32 GetInteger() const
        {
            return m_value;
        }

        inline Integer& operator=(UInt32 value)
        {
            m_value = value;
            return *this;
        }

        inline bool operator==(UInt32 value) const
        {
            return m_value == value;
        }

        inline bool operator!=(UInt32 value) const
        {
            return !(*this == value);
        }

        virtual void Serialize(OutStream& stream);
        virtual void Deserialize(InStream& stream);

    private:
        UInt32 m_value;
    };

    OutStream& operator<<(OutStream& lhs, const Integer& rhs);
}

#endif // AMF3_INTEGER_H
