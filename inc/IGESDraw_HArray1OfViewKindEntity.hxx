// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_HArray1OfViewKindEntity_HeaderFile
#define _IGESDraw_HArray1OfViewKindEntity_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESDraw_HArray1OfViewKindEntity.hxx>

#include <IGESDraw_Array1OfViewKindEntity.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_IGESData_ViewKindEntity.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESData_ViewKindEntity;
class IGESDraw_Array1OfViewKindEntity;



class IGESDraw_HArray1OfViewKindEntity : public MMgt_TShared
{

public:

  
    IGESDraw_HArray1OfViewKindEntity(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESDraw_HArray1OfViewKindEntity(const Standard_Integer Low, const Standard_Integer Up, const Handle(IGESData_ViewKindEntity)& V);
  
      void Init (const Handle(IGESData_ViewKindEntity)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESData_ViewKindEntity)& Value) ;
  
     const  Handle(IGESData_ViewKindEntity)& Value (const Standard_Integer Index)  const;
  
      Handle(IGESData_ViewKindEntity)& ChangeValue (const Standard_Integer Index) ;
  
     const  IGESDraw_Array1OfViewKindEntity& Array1()  const;
  
      IGESDraw_Array1OfViewKindEntity& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESDraw_HArray1OfViewKindEntity)

protected:




private: 


  IGESDraw_Array1OfViewKindEntity myArray;


};

#define ItemHArray1 Handle(IGESData_ViewKindEntity)
#define ItemHArray1_hxx <IGESData_ViewKindEntity.hxx>
#define TheArray1 IGESDraw_Array1OfViewKindEntity
#define TheArray1_hxx <IGESDraw_Array1OfViewKindEntity.hxx>
#define TCollection_HArray1 IGESDraw_HArray1OfViewKindEntity
#define TCollection_HArray1_hxx <IGESDraw_HArray1OfViewKindEntity.hxx>
#define Handle_TCollection_HArray1 Handle_IGESDraw_HArray1OfViewKindEntity
#define TCollection_HArray1_Type_() IGESDraw_HArray1OfViewKindEntity_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _IGESDraw_HArray1OfViewKindEntity_HeaderFile
