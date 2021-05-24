//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#include "pxr/usd/usdPhysics/preliminary_InfiniteColliderPlane.h"
#include "pxr/usd/usd/schemaRegistry.h"
#include "pxr/usd/usd/typed.h"

#include "pxr/usd/sdf/types.h"
#include "pxr/usd/sdf/assetPath.h"

PXR_NAMESPACE_OPEN_SCOPE

// Register the schema with the TfType system.
TF_REGISTRY_FUNCTION(TfType)
{
    TfType::Define<UsdPhysicsPreliminary_InfiniteColliderPlane,
        TfType::Bases< UsdGeomGprim > >();
    
}

/* virtual */
UsdPhysicsPreliminary_InfiniteColliderPlane::~UsdPhysicsPreliminary_InfiniteColliderPlane()
{
}

/* static */
UsdPhysicsPreliminary_InfiniteColliderPlane
UsdPhysicsPreliminary_InfiniteColliderPlane::Get(const UsdStagePtr &stage, const SdfPath &path)
{
    if (!stage) {
        TF_CODING_ERROR("Invalid stage");
        return UsdPhysicsPreliminary_InfiniteColliderPlane();
    }
    return UsdPhysicsPreliminary_InfiniteColliderPlane(stage->GetPrimAtPath(path));
}


/* virtual */
UsdSchemaKind UsdPhysicsPreliminary_InfiniteColliderPlane::_GetSchemaKind() const {
    return UsdPhysicsPreliminary_InfiniteColliderPlane::schemaKind;
}

/* virtual */
UsdSchemaKind UsdPhysicsPreliminary_InfiniteColliderPlane::_GetSchemaType() const {
    return UsdPhysicsPreliminary_InfiniteColliderPlane::schemaType;
}

/* static */
const TfType &
UsdPhysicsPreliminary_InfiniteColliderPlane::_GetStaticTfType()
{
    static TfType tfType = TfType::Find<UsdPhysicsPreliminary_InfiniteColliderPlane>();
    return tfType;
}

/* static */
bool 
UsdPhysicsPreliminary_InfiniteColliderPlane::_IsTypedSchema()
{
    static bool isTyped = _GetStaticTfType().IsA<UsdTyped>();
    return isTyped;
}

/* virtual */
const TfType &
UsdPhysicsPreliminary_InfiniteColliderPlane::_GetTfType() const
{
    return _GetStaticTfType();
}

UsdAttribute
UsdPhysicsPreliminary_InfiniteColliderPlane::GetPositionAttr() const
{
    return GetPrim().GetAttribute(UsdPhysicsTokens->position);
}

UsdAttribute
UsdPhysicsPreliminary_InfiniteColliderPlane::CreatePositionAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdPhysicsTokens->position,
                       SdfValueTypeNames->Point3d,
                       /* custom = */ false,
                       SdfVariabilityVarying,
                       defaultValue,
                       writeSparsely);
}

UsdAttribute
UsdPhysicsPreliminary_InfiniteColliderPlane::GetNormalAttr() const
{
    return GetPrim().GetAttribute(UsdPhysicsTokens->normal);
}

UsdAttribute
UsdPhysicsPreliminary_InfiniteColliderPlane::CreateNormalAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdPhysicsTokens->normal,
                       SdfValueTypeNames->Vector3d,
                       /* custom = */ false,
                       SdfVariabilityVarying,
                       defaultValue,
                       writeSparsely);
}

namespace {
static inline TfTokenVector
_ConcatenateAttributeNames(const TfTokenVector& left,const TfTokenVector& right)
{
    TfTokenVector result;
    result.reserve(left.size() + right.size());
    result.insert(result.end(), left.begin(), left.end());
    result.insert(result.end(), right.begin(), right.end());
    return result;
}
}

/*static*/
const TfTokenVector&
UsdPhysicsPreliminary_InfiniteColliderPlane::GetSchemaAttributeNames(bool includeInherited)
{
    static TfTokenVector localNames = {
        UsdPhysicsTokens->position,
        UsdPhysicsTokens->normal,
    };
    static TfTokenVector allNames =
        _ConcatenateAttributeNames(
            UsdGeomGprim::GetSchemaAttributeNames(true),
            localNames);

    if (includeInherited)
        return allNames;
    else
        return localNames;
}

PXR_NAMESPACE_CLOSE_SCOPE

// ===================================================================== //
// Feel free to add custom code below this line. It will be preserved by
// the code generator.
//
// Just remember to wrap code in the appropriate delimiters:
// 'PXR_NAMESPACE_OPEN_SCOPE', 'PXR_NAMESPACE_CLOSE_SCOPE'.
// ===================================================================== //
// --(BEGIN CUSTOM CODE)--
