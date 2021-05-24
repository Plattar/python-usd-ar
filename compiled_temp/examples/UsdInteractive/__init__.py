from . import _UsdInteractive
from pxr import Tf
Tf.PrepareModule(_UsdInteractive, locals())
del Tf

try:
    from . import __DOC
    __DOC.Execute(locals())
    del __DOC
except Exception:
    pass