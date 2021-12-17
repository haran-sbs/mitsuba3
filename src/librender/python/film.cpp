#include <mitsuba/render/film.h>
#include <mitsuba/python/python.h>

MTS_PY_EXPORT(FilmFlags) {
    auto e = py::enum_<FilmFlags>(m, "FilmFlags", D(FilmFlags))
        .def_value(FilmFlags, None)
        .def_value(FilmFlags, Alpha)
        .def_value(FilmFlags, Spectral)
        .def_value(FilmFlags, Special);

    MTS_PY_DECLARE_ENUM_OPERATORS(FilmFlags, e)
}
