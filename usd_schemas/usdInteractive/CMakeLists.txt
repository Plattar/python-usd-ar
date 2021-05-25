set(PXR_PACKAGE usdInteractive)

pxr_plugin(${PXR_PACKAGE}
    LIBRARIES
        tf
        sdf
        usd
        vt
        usdGeom

    INCLUDE_DIRS
        ${Boost_INCLUDE_DIRS}
        ${PYTHON_INCLUDE_DIRS}

    PUBLIC_HEADERS
        api.h

    PUBLIC_CLASSES
        preliminary_Action
        preliminary_AnchoringAPI
        preliminary_Behavior
        preliminary_ReferenceImage
        preliminary_Text
        preliminary_Trigger
        tokens

    PYTHON_CPPFILES
        moduleDeps.cpp    

    PYMODULE_FILES
        __init__.py

    PYMODULE_CPPFILES
        module.cpp
        wrapPreliminary_Action.cpp
        wrapPreliminary_AnchoringAPI.cpp
        wrapPreliminary_Behavior.cpp
        wrapPreliminary_ReferenceImage.cpp
        wrapPreliminary_Text.cpp
        wrapPreliminary_Trigger.cpp
        wrapTokens.cpp        

    RESOURCE_FILES
        generatedSchema.usda
        plugInfo.json
        schema.usda:usdInteractive/schema.usda
)