#include "friend.hpp"

void A::setSecretValue( B & obj, int value)
{
    obj.secretValue = value;
}