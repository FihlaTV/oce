// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ProductDefinitionEffectivity_HeaderFile
#define _StepBasic_ProductDefinitionEffectivity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinitionEffectivity_HeaderFile
#include <Handle_StepBasic_ProductDefinitionEffectivity.hxx>
#endif

#ifndef _Handle_StepBasic_ProductDefinitionRelationship_HeaderFile
#include <Handle_StepBasic_ProductDefinitionRelationship.hxx>
#endif
#ifndef _StepBasic_Effectivity_HeaderFile
#include <StepBasic_Effectivity.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepBasic_ProductDefinitionRelationship;
class TCollection_HAsciiString;



class StepBasic_ProductDefinitionEffectivity : public StepBasic_Effectivity {

public:

  
  Standard_EXPORT   StepBasic_ProductDefinitionEffectivity();
  
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aId,const Handle(StepBasic_ProductDefinitionRelationship)& aUsage) ;
  
  Standard_EXPORT     Handle_StepBasic_ProductDefinitionRelationship Usage() const;
  
  Standard_EXPORT     void SetUsage(const Handle(StepBasic_ProductDefinitionRelationship)& aUsage) ;




  DEFINE_STANDARD_RTTI(StepBasic_ProductDefinitionEffectivity)

protected:




private: 


Handle_StepBasic_ProductDefinitionRelationship theUsage;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif