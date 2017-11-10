template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_Input();
	RegisterModule_Input();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; 
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; template <> void RegisterClass<GUITexture>();
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; template <> void RegisterClass<LineRenderer>();
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class StyleSheetImporter; 
class AudioMixer; template <> void RegisterClass<AudioMixer>();
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterClass<AudioMixerGroup>();
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterClass<AudioMixerSnapshot>();
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; 
class AnimationClip; 
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 79 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. MeshFilter
	RegisterClass<MeshFilter>();
	//6. Renderer
	RegisterClass<Renderer>();
	//7. GUITexture
	RegisterClass<GUITexture>();
	//8. GUIElement
	RegisterClass<GUIElement>();
	//9. GUILayer
	RegisterClass<GUILayer>();
	//10. Light
	RegisterClass<Light>();
	//11. Mesh
	RegisterClass<Mesh>();
	//12. NamedObject
	RegisterClass<NamedObject>();
	//13. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//14. NetworkView
	RegisterClass<NetworkView>();
	//15. Shader
	RegisterClass<Shader>();
	//16. Material
	RegisterClass<Material>();
	//17. Sprite
	RegisterClass<Sprite>();
	//18. Texture
	RegisterClass<Texture>();
	//19. Texture2D
	RegisterClass<Texture2D>();
	//20. RenderTexture
	RegisterClass<RenderTexture>();
	//21. Transform
	RegisterClass<Transform>();
	//22. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//23. Rigidbody
	RegisterClass<Rigidbody>();
	//24. Collider
	RegisterClass<Collider>();
	//25. BoxCollider
	RegisterClass<BoxCollider>();
	//26. SphereCollider
	RegisterClass<SphereCollider>();
	//27. MeshCollider
	RegisterClass<MeshCollider>();
	//28. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//29. AudioClip
	RegisterClass<AudioClip>();
	//30. SampleClip
	RegisterClass<SampleClip>();
	//31. AudioSource
	RegisterClass<AudioSource>();
	//32. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//33. AudioMixer
	RegisterClass<AudioMixer>();
	//34. Animator
	RegisterClass<Animator>();
	//35. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//36. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//37. UI::Canvas
	RegisterClass<UI::Canvas>();
	//38. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//39. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//40. LineRenderer
	RegisterClass<LineRenderer>();
	//41. AudioMixerGroup
	RegisterClass<AudioMixerGroup>();
	//42. Collider2D
	RegisterClass<Collider2D>();
	//43. MeshRenderer
	RegisterClass<MeshRenderer>();
	//44. PreloadData
	RegisterClass<PreloadData>();
	//45. Cubemap
	RegisterClass<Cubemap>();
	//46. Texture3D
	RegisterClass<Texture3D>();
	//47. Texture2DArray
	RegisterClass<Texture2DArray>();
	//48. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//49. MonoScript
	RegisterClass<MonoScript>();
	//50. TextAsset
	RegisterClass<TextAsset>();
	//51. NetworkManager
	RegisterClass<NetworkManager>();
	//52. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//53. GameManager
	RegisterClass<GameManager>();
	//54. AudioManager
	RegisterClass<AudioManager>();
	//55. PhysicsManager
	RegisterClass<PhysicsManager>();
	//56. PlayerSettings
	RegisterClass<PlayerSettings>();
	//57. BuildSettings
	RegisterClass<BuildSettings>();
	//58. InputManager
	RegisterClass<InputManager>();
	//59. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//60. TimeManager
	RegisterClass<TimeManager>();
	//61. TagManager
	RegisterClass<TagManager>();
	//62. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//63. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//64. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//65. QualitySettings
	RegisterClass<QualitySettings>();
	//66. ResourceManager
	RegisterClass<ResourceManager>();
	//67. MonoManager
	RegisterClass<MonoManager>();
	//68. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//69. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//70. ScriptMapper
	RegisterClass<ScriptMapper>();
	//71. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//72. RenderSettings
	RegisterClass<RenderSettings>();
	//73. LevelGameManager
	RegisterClass<LevelGameManager>();
	//74. LightmapSettings
	RegisterClass<LightmapSettings>();
	//75. AudioListener
	RegisterClass<AudioListener>();
	//76. AudioMixerSnapshot
	RegisterClass<AudioMixerSnapshot>();
	//77. FlareLayer
	RegisterClass<FlareLayer>();
	//78. LightProbes
	RegisterClass<LightProbes>();

}
