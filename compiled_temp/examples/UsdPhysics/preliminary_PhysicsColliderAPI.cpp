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
#include "pxr/usd/usdPhysics/preliminary_PhysicsColliderAPI.h"
#include "pxr/usd/usd/schemaRegistry.h"
#include "pxr/usd/usd/typed.h"
#include "pxr/usd/usd/tokens.h"

#include "pxr/usd/sdf/types.h"
#include "pxr/usd/sdf/assetPath.h"

PXR_NAMESPACE_OPEN_SCOPE

// Register the schema with the TfType system.
TF_REGISTRY_FUNCTION(TfType)
{
    TfType::Define<UsdPhysicsPreliminary_PhysicsColliderAPI,
        TfType::Bases< UsdAPISchemaBase > >();
    
}

TF_DEFINE_PRIVATE_TOKENS(
    _schemaTokens,
    (Preliminary_PhysicsColliderAPI)
);

/* virtual */
UsdPhysicsPreliminary_PhysicsColliderAPI::~UsdPhysicsPreliminary_PhysicsColliderAPI()
{
}

/* static */
UsdPhysicsPreliminary_PhysicsColliderAPI
UsdPhysicsPreliminary_PhysicsColliderAPI::Get(const UsdStagePtr &stage, const SdfPath &path)
{
    if (!stage) {
        TF_CODING_ERROR("Invalid stage");
        return UsdPhysicsPreliminary_PhysicsColliderAPI();
    }
    return UsdPhysicsPreliminary_PhysicsColliderAPI(stage->GetPrimAtPath(path));
}


/* virtual */
UsdSchemaKind UsdPhysicsPreliminary_PhysicsColliderAPI::_GetSchemaKind() const {
    return UsdPhysicsPreliminary_PhysicsColliderAPI::schemaKind;
}

/* virtual */
UsdSchemaKind UsdPhysicsPreliminary_PhysicsColliderAPI::_GetSchemaType() const {
    return UsdPhysicsPreliminary_PhysicsColliderAPI::schemaType;
}

/* static */
UsdPhysicsPreliminary_PhysicsColliderAPI
UsdPhysicsPreliminary_PhysicsColliderAPI::Apply(const UsdPrim &prim)
{
    if (prim.ApplyAPI<UsdPhysicsPreliminary_PhysicsColliderAPI>()) {
        return UsdPhysicsPreliminary_PhysicsColliderAPI(prim);
    }
    return UsdPhysicsPreliminary_PhysicsColliderAPI();
}

/* static */
const TfType &
UsdPhysicsPreliminary_PhysicsColliderAPI::_GetStaticTfType()
{
    static TfType tfType = TfType::Find<UsdPhysicsPreliminary_PhysicsColliderAPI>();
    return tfType;
}

/* static */
bool 
UsdPhysicsPreliminary_PhysicsColliderAPI::_IsTypedSchema()
{
    static bool isTyped = _GetStaticTfType().IsA<UsdTyped>();
    return isTyped;
}

/* virtual */
const TfType &
UsdPhysicsPreliminary_PhysicsColliderAPI::_GetTfType() const
{
    return _GetStaticTfType();
}

UsdRelationship
UsdPhysicsPreliminary_PhysicsColliderAPI::GetPreliminaryPhysicsColliderConvexShapeRel() const
{
    return GetPrim().GetRelationship(UsdPhysicsTokens->preliminaryPhysicsColliderConvexShape);
}

UsdRelationship
UsdPhysicsPreliminary_PhysicsColliderAPI::CreatePreliminaryPhysicsColliderConvexShapeRel() const
{
    return GetPrim().CreateRelationship(UsdPhysicsTokens->preliminaryPhysicsColliderConvexShape,
                       /* custom = */ false);
}

/*static*/
const TfTokenVector&
UsdPhysicsPreliminary_PhysicsColliderAPI::GetSchemaAttributeNames(bool includeInherited)
{
    static TfTokenVector localNames;
    static TfTokenVector allNames =
        UsdAPISchemaBase::GetSchemaAttributeNames(true);

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
