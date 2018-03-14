#include "internal/common.cpp"
#include "internal/http_client.cpp"
#include "internal/interactive_auth.cpp"
#include "internal/interactive_control.cpp"
#include "internal/interactive_group.cpp"
#include "internal/interactive_participant.cpp"
#include "internal/interactive_scene.cpp"
#include "internal/interactive_session.cpp"
#include "internal/interactive_session_internal.cpp"
#if _DURANGO || WINAPI_PARTITION_APP
#include "internal/simplewebsocketcpp/simplewebsocketUWP.cpp"
#elif _WIN32
#include "internal/win_http_client.cpp"
#include "internal/simplewebsocketcpp/simplewebsocketwin.cpp"
#endif