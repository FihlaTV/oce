// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapOfInterferenceListOfInterference_HeaderFile
#define _TopOpeBRepDS_DataMapOfInterferenceListOfInterference_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_Interference_HeaderFile
#include <Handle_TopOpeBRepDS_Interference.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference_HeaderFile
#include <Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TopOpeBRepDS_Interference;
class TopOpeBRepDS_ListOfInterference;
class TColStd_MapTransientHasher;
class TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference;
class TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceListOfInterference;



class TopOpeBRepDS_DataMapOfInterferenceListOfInterference  : public TCollection_BasicMap {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   TopOpeBRepDS_DataMapOfInterferenceListOfInterference(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TopOpeBRepDS_DataMapOfInterferenceListOfInterference& Assign(const TopOpeBRepDS_DataMapOfInterferenceListOfInterference& Other) ;
    TopOpeBRepDS_DataMapOfInterferenceListOfInterference& operator =(const TopOpeBRepDS_DataMapOfInterferenceListOfInterference& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TopOpeBRepDS_DataMapOfInterferenceListOfInterference()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Handle(TopOpeBRepDS_Interference)& K,const TopOpeBRepDS_ListOfInterference& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Handle(TopOpeBRepDS_Interference)& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Handle(TopOpeBRepDS_Interference)& K) ;
  
  Standard_EXPORT    const TopOpeBRepDS_ListOfInterference& Find(const Handle(TopOpeBRepDS_Interference)& K) const;
   const TopOpeBRepDS_ListOfInterference& operator()(const Handle(TopOpeBRepDS_Interference)& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     TopOpeBRepDS_ListOfInterference& ChangeFind(const Handle(TopOpeBRepDS_Interference)& K) ;
    TopOpeBRepDS_ListOfInterference& operator()(const Handle(TopOpeBRepDS_Interference)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const Handle(TopOpeBRepDS_Interference)& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const Handle(TopOpeBRepDS_Interference)& K) ;





protected:





private:

  
  Standard_EXPORT   TopOpeBRepDS_DataMapOfInterferenceListOfInterference(const TopOpeBRepDS_DataMapOfInterferenceListOfInterference& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif