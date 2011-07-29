// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_DimensionalCharacteristicRepresentation_HeaderFile
#define _StepShape_DimensionalCharacteristicRepresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_DimensionalCharacteristicRepresentation_HeaderFile
#include <Handle_StepShape_DimensionalCharacteristicRepresentation.hxx>
#endif

#ifndef _StepShape_DimensionalCharacteristic_HeaderFile
#include <StepShape_DimensionalCharacteristic.hxx>
#endif
#ifndef _Handle_StepShape_ShapeDimensionRepresentation_HeaderFile
#include <Handle_StepShape_ShapeDimensionRepresentation.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepShape_ShapeDimensionRepresentation;
class StepShape_DimensionalCharacteristic;


//! Representation of STEP entity DimensionalCharacteristicRepresentation <br>
class StepShape_DimensionalCharacteristicRepresentation : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepShape_DimensionalCharacteristicRepresentation();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const StepShape_DimensionalCharacteristic& aDimension,const Handle(StepShape_ShapeDimensionRepresentation)& aRepresentation) ;
  //! Returns field Dimension <br>
  Standard_EXPORT     StepShape_DimensionalCharacteristic Dimension() const;
  //! Set field Dimension <br>
  Standard_EXPORT     void SetDimension(const StepShape_DimensionalCharacteristic& Dimension) ;
  //! Returns field Representation <br>
  Standard_EXPORT     Handle_StepShape_ShapeDimensionRepresentation Representation() const;
  //! Set field Representation <br>
  Standard_EXPORT     void SetRepresentation(const Handle(StepShape_ShapeDimensionRepresentation)& Representation) ;




  DEFINE_STANDARD_RTTI(StepShape_DimensionalCharacteristicRepresentation)

protected:




private: 


StepShape_DimensionalCharacteristic theDimension;
Handle_StepShape_ShapeDimensionRepresentation theRepresentation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif