from . import _usdPhysics
from pxr import Tf
Tf.PrepareModule(_usdPhysics, locals())
del Tf

try:
    from . import __DOC
    __DOC.Execute(locals())
    del __DOC
except Exception:
    pass