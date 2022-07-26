#include "xbseparateimplementation.h"
#include "xbexampleclass.h"

namespace XB
{

template<typename BASE>
SeparateImplementation<BASE>::SeparateImplementation()
{

}

template<typename BASE>
void SeparateImplementation<BASE>::function()
{

}

}

#define AddClass(CLASS) \
    template XB::SeparateImplementation<CLASS>::SeparateImplementation(); \
    template void XB::SeparateImplementation<CLASS>::function();

AddClass(XB::ExampleClass)
