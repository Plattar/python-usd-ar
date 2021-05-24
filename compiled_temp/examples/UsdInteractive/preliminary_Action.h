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
#ifndef USDINTERACTIVE_GENERATED_PRELIMINARY_ACTION_H
#define USDINTERACTIVE_GENERATED_PRELIMINARY_ACTION_H

/// \file usdInteractive/preliminary_Action.h

#include "pxr/pxr.h"
#include "pxr/usd/usdInteractive/api.h"
#include "pxr/usd/usd/typed.h"
#include "pxr/usd/usd/prim.h"
#include "pxr/usd/usd/stage.h"
#include "pxr/usd/usdInteractive/tokens.h"

#include "pxr/base/vt/value.h"

#include "pxr/base/gf/vec3d.h"
#include "pxr/base/gf/vec3f.h"
#include "pxr/base/gf/matrix4d.h"

#include "pxr/base/tf/token.h"
#include "pxr/base/tf/type.h"

PXR_NAMESPACE_OPEN_SCOPE

class SdfAssetPath;

// -------------------------------------------------------------------------- //
// PRELIMINARY_ACTION                                                         //
// -------------------------------------------------------------------------- //

/// \class UsdInteractivePreliminary_Action
///
/// An Action is performed when a *Trigger* is executed.
/// Performing an action is how a Behavior modifies the state of the scene dynamically.
/// For example, an action might start an animation playing, change the transform
/// of an *Xformable*, or start looping audio.
/// 
/// This is the base class for Behavior actions
///
/// For any described attribute \em Fallback \em Value or \em Allowed \em Values below
/// that are text/tokens, the actual token is published and defined in \ref UsdInteractiveTokens.
/// So to set an attribute to the value "rightHanded", use UsdInteractiveTokens->rightHanded
/// as the value.
///
class UsdInteractivePreliminary_Action : public UsdTyped
{
public:
    /// Compile time constant representing what kind of schema this class is.
    ///
    /// \sa UsdSchemaKind
    static const UsdSchemaKind schemaKind = UsdSchemaKind::AbstractTyped;

    /// \deprecated
    /// Same as schemaKind, provided to maintain temporary backward 
    /// compatibility with older generated schemas.
    static const UsdSchemaKind schemaType = UsdSchemaKind::AbstractTyped;

    /// Construct a UsdInteractivePreliminary_Action on UsdPrim \p prim .
    /// Equivalent to UsdInteractivePreliminary_Action::Get(prim.GetStage(), prim.GetPath())
    /// for a \em valid \p prim, but will not immediately throw an error for
    /// an invalid \p prim
    explicit UsdInteractivePreliminary_Action(const UsdPrim& prim=UsdPrim())
        : UsdTyped(prim)
    {
    }

    /// Construct a UsdInteractivePreliminary_Action on the prim held by \p schemaObj .
    /// Should be preferred over UsdInteractivePreliminary_Action(schemaObj.GetPrim()),
    /// as it preserves SchemaBase state.
    explicit UsdInteractivePreliminary_Action(const UsdSchemaBase& schemaObj)
        : UsdTyped(schemaObj)
    {
    }

    /// Destructor.
    USDINTERACTIVE_API
    virtual ~UsdInteractivePreliminary_Action();

    /// Return a vector of names of all pre-declared attributes for this schema
    /// class and all its ancestor classes.  Does not include attributes that
    /// may be authored by custom/extended methods of the schemas involved.
    USDINTERACTIVE_API
    static const TfTokenVector &
    GetSchemaAttributeNames(bool includeInherited=true);

    /// Return a UsdInteractivePreliminary_Action holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    ///
    /// \code
    /// UsdInteractivePreliminary_Action(stage->GetPrimAtPath(path));
    /// \endcode
    ///
    USDINTERACTIVE_API
    static UsdInteractivePreliminary_Action
    Get(const UsdStagePtr &stage, const SdfPath &path);


protected:
    /// Returns the kind of schema this class belongs to.
    ///
    /// \sa UsdSchemaKind
    USDINTERACTIVE_API
    UsdSchemaKind _GetSchemaKind() const override;

    /// \deprecated
    /// Same as _GetSchemaKind, provided to maintain temporary backward 
    /// compatibility with older generated schemas.
    USDINTERACTIVE_API
    UsdSchemaKind _GetSchemaType() const override;

private:
    // needs to invoke _GetStaticTfType.
    friend class UsdSchemaRegistry;
    USDINTERACTIVE_API
    static const TfType &_GetStaticTfType();

    static bool _IsTypedSchema();

    // override SchemaBase virtuals.
    USDINTERACTIVE_API
    const TfType &_GetTfType() const override;

public:
    // --------------------------------------------------------------------- //
    // INFOID 
    // --------------------------------------------------------------------- //
    /// The id is the identifier for the type or purpose of the action.
    /// E.g. Impulse, Group
    /// The value of this id is interpreted by the runtime implementation of the
    /// behavior system.
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token info:id` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    USDINTERACTIVE_API
    UsdAttribute GetInfoIdAttr() const;

    /// See GetInfoIdAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    USDINTERACTIVE_API
    UsdAttribute CreateInfoIdAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // MULTIPLEPERFORMOPERATION 
    // --------------------------------------------------------------------- //
    /// Defines how this action handles a request be performed again while
    /// already running.
    /// Valid values are:
    /// - allow: Perform the action again, effectively restarting it.
    /// - ignore: Ignore the perform request, and continue running the current action.
    /// - stop: Stops the current action.
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token multiplePerformOperation = "ignore"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref UsdInteractiveTokens "Allowed Values" | ignore, allow, stop |
    USDINTERACTIVE_API
    UsdAttribute GetMultiplePerformOperationAttr() const;

    /// See GetMultiplePerformOperationAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    USDINTERACTIVE_API
    UsdAttribute CreateMultiplePerformOperationAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // ===================================================================== //
    // Feel free to add custom code below this line, it will be preserved by 
    // the code generator. 
    //
    // Just remember to: 
    //  - Close the class declaration with }; 
    //  - Close the namespace with PXR_NAMESPACE_CLOSE_SCOPE
    //  - Close the include guard with #endif
    // ===================================================================== //
    // --(BEGIN CUSTOM CODE)--
};

PXR_NAMESPACE_CLOSE_SCOPE

#endif
