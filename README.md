# Kahrmium - Navegador Web de Código Abierto

Kahrmium es un navegador web moderno, ligero y de código abierto, inspirado en Chromium pero desarrollado desde cero. Diseñado para ofrecer velocidad, seguridad y privacidad con soporte multiplataforma.

## 🎯 Características

- **Motor de renderizado propio**: Basado en estándares web modernos
- **Multiplataforma**: Windows, macOS, Linux y dispositivos móviles (Android, iOS)
- **Tecnología**: C++ para el núcleo, JavaScript para extensiones y UI
- **Ligero y rápido**: Optimizado para rendimiento
- **Código abierto**: 100% transparencia y contribución comunitaria
- **Privacidad**: Soporte para navegación privada y bloqueo de rastreadores

## 📋 Requisitos del Sistema

### Desarrollo
- **C++17 o superior**
- **CMake 3.16+**
- **Node.js 16+ o superior**
- **Git**

### Compilación por plataforma
- **Windows**: Visual Studio 2019+ o Clang
- **macOS**: Xcode Command Line Tools
- **Linux**: GCC 10+ o Clang
- **Móvil**: Android NDK + Gradle, Xcode para iOS

## 🚀 Inicio Rápido

### Clonar el repositorio
```bash
git clone https://github.com/estudiopablito5-max/Kahrmium.git
cd Kahrmium
```

### Compilar para Desktop (Linux)
```bash
mkdir build
cd build
cmake ..
make
./kahrmium
```

### Compilar para Windows
```bash
mkdir build
cd build
cmake .. -G "Visual Studio 16 2019"
cmake --build . --config Release
```

### Compilar para macOS
```bash
mkdir build
cd build
cmake ..
make
open Kahrmium.app
```

### Compilar para Android
```bash
cd mobile/android
gradle assembleRelease
```

### Compilar para iOS
```bash
cd mobile/ios
xcodebuild -scheme Kahrmium -configuration Release
```

## 📁 Estructura del Proyecto

```
Kahrmium/
├── src/
│   ├── core/              # Motor principal (C++)
│   │   ├── renderer/      # Motor de renderizado
│   │   ├── networking/    # Stack de red
│   │   ├── storage/       # Gestión de datos
│   │   └── security/      # Módulo de seguridad
│   ├── ui/                # Interfaz de usuario
│   │   ├── desktop/       # UI Desktop (C++)
│   │   ├── mobile/        # UI Móvil (C++)
│   │   └── components/    # Componentes compartidos
│   ├── extensions/        # Sistema de extensiones (JavaScript)
│   └── utils/             # Utilidades comunes
├── third_party/           # Dependencias externas
├── mobile/
│   ├── android/           # Código Android
│   └── ios/               # Código iOS
├── docs/                  # Documentación
├── tests/                 # Tests unitarios
├── CMakeLists.txt         # Build configuration
└── package.json           # Dependencias JavaScript
```

## 🔨 Arquitectura

### Core (C++)
- **Rendering Engine**: Motor de renderizado basado en WebKit/Blink
- **Networking Stack**: Implementación de HTTP/HTTPS, WebSocket, HTTP/2
- **Storage Engine**: Gestión de cookies, caché, bases de datos
- **Security Module**: Sandbox, protección CSRF, XSS, CSP

### JavaScript
- **Extensions API**: Sistema de extensiones para navegador
- **UI Components**: Componentes reutilizables
- **Web APIs**: APIs web estándar

## 📦 Dependencias Principales

- **Skia**: Renderización gráfica
- **OpenSSL**: Seguridad y cifrado
- **SQLite**: Base de datos
- **libcurl**: Transferencias HTTP
- **V8**: Motor JavaScript (futuro)
- **Boost**: Librerías C++ útiles

## 🛠️ Desarrollo

### Configurar entorno de desarrollo
```bash
npm install
pip install -r requirements.txt
```

### Ejecutar tests
```bash
ctest --output-on-failure
npm test
```

### Formato de código
```bash
clang-format -i src/**/*.{h,cc}
```

## 🤝 Contribución

¿Quieres contribuir? ¡Excelente! Por favor:

1. Fork el repositorio
2. Crea una rama para tu feature (`git checkout -b feature/AmazingFeature`)
3. Commit tus cambios (`git commit -m 'Add AmazingFeature'`)
4. Push a la rama (`git push origin feature/AmazingFeature`)
5. Abre un Pull Request

## 📝 Roadmap

### Fase 1: MVP (Motor Base)
- [ ] Motor de renderizado básico
- [ ] Pestañas y navegación
- [ ] Gestor de descargas
- [ ] Historial

### Fase 2: Características Avanzadas
- [ ] Sistema de extensiones
- [ ] Sincronización en la nube
- [ ] Gestor de contraseñas
- [ ] Protección de privacidad

### Fase 3: Móvil
- [ ] App Android
- [ ] App iOS
- [ ] Sincronización cross-platform

### Fase 4: Optimización
- [ ] Performance tuning
- [ ] Consumo de memoria
- [ ] Benchmarks

## 📄 Licencia

Kahrmium está bajo la licencia **GPL-3.0**. Ver [LICENSE](LICENSE) para más detalles.

## 💬 Comunidad

- **Issues**: [GitHub Issues](https://github.com/estudiopablito5-max/Kahrmium/issues)
- **Discussions**: [GitHub Discussions](https://github.com/estudiopablito5-max/Kahrmium/discussions)
- **Email**: contacto@kahrmium.dev

## 🙏 Agradecimientos

Inspirado en Chromium, Firefox y otros proyectos de código abierto. Gracias a la comunidad de desarrolladores.

---

**Kahrmium** - *Navega Libremente* 🌐
