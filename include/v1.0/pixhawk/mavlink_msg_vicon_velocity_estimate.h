// MESSAGE VICON_VELOCITY_ESTIMATE PACKING

#define MAVLINK_MSG_ID_VICON_VELOCITY_ESTIMATE 164

typedef struct __mavlink_vicon_velocity_estimate_t
{
 uint64_t usec; ///< Timestamp (microseconds, synced to UNIX time or since system boot)
 float vx; ///< Global X position
 float vy; ///< Global Y position
 float vz; ///< Global Z position
 float vroll; ///< Roll angle in rad
 float vpitch; ///< Pitch angle in rad
 float vyaw; ///< Yaw angle in rad
} mavlink_vicon_velocity_estimate_t;

#define MAVLINK_MSG_ID_VICON_VELOCITY_ESTIMATE_LEN 32
#define MAVLINK_MSG_ID_164_LEN 32



#define MAVLINK_MESSAGE_INFO_VICON_VELOCITY_ESTIMATE { \
	"VICON_VELOCITY_ESTIMATE", \
	7, \
	{  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_vicon_velocity_estimate_t, usec) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vicon_velocity_estimate_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_vicon_velocity_estimate_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_vicon_velocity_estimate_t, vz) }, \
         { "vroll", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_vicon_velocity_estimate_t, vroll) }, \
         { "vpitch", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_vicon_velocity_estimate_t, vpitch) }, \
         { "vyaw", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_vicon_velocity_estimate_t, vyaw) }, \
         } \
}


/**
 * @brief Pack a vicon_velocity_estimate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param vx Global X position
 * @param vy Global Y position
 * @param vz Global Z position
 * @param vroll Roll angle in rad
 * @param vpitch Pitch angle in rad
 * @param vyaw Yaw angle in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vicon_velocity_estimate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t usec, float vx, float vy, float vz, float vroll, float vpitch, float vyaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[32];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, vx);
	_mav_put_float(buf, 12, vy);
	_mav_put_float(buf, 16, vz);
	_mav_put_float(buf, 20, vroll);
	_mav_put_float(buf, 24, vpitch);
	_mav_put_float(buf, 28, vyaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 32);
#else
	mavlink_vicon_velocity_estimate_t packet;
	packet.usec = usec;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;
	packet.vroll = vroll;
	packet.vpitch = vpitch;
	packet.vyaw = vyaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 32);
#endif

	msg->msgid = MAVLINK_MSG_ID_VICON_VELOCITY_ESTIMATE;
	return mavlink_finalize_message(msg, system_id, component_id, 32, 219);
}

/**
 * @brief Pack a vicon_velocity_estimate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param vx Global X position
 * @param vy Global Y position
 * @param vz Global Z position
 * @param vroll Roll angle in rad
 * @param vpitch Pitch angle in rad
 * @param vyaw Yaw angle in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vicon_velocity_estimate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t usec,float vx,float vy,float vz,float vroll,float vpitch,float vyaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[32];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, vx);
	_mav_put_float(buf, 12, vy);
	_mav_put_float(buf, 16, vz);
	_mav_put_float(buf, 20, vroll);
	_mav_put_float(buf, 24, vpitch);
	_mav_put_float(buf, 28, vyaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 32);
#else
	mavlink_vicon_velocity_estimate_t packet;
	packet.usec = usec;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;
	packet.vroll = vroll;
	packet.vpitch = vpitch;
	packet.vyaw = vyaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 32);
#endif

	msg->msgid = MAVLINK_MSG_ID_VICON_VELOCITY_ESTIMATE;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 32, 219);
}

/**
 * @brief Encode a vicon_velocity_estimate struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vicon_velocity_estimate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vicon_velocity_estimate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vicon_velocity_estimate_t* vicon_velocity_estimate)
{
	return mavlink_msg_vicon_velocity_estimate_pack(system_id, component_id, msg, vicon_velocity_estimate->usec, vicon_velocity_estimate->vx, vicon_velocity_estimate->vy, vicon_velocity_estimate->vz, vicon_velocity_estimate->vroll, vicon_velocity_estimate->vpitch, vicon_velocity_estimate->vyaw);
}

/**
 * @brief Send a vicon_velocity_estimate message
 * @param chan MAVLink channel to send the message
 *
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param vx Global X position
 * @param vy Global Y position
 * @param vz Global Z position
 * @param vroll Roll angle in rad
 * @param vpitch Pitch angle in rad
 * @param vyaw Yaw angle in rad
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vicon_velocity_estimate_send(mavlink_channel_t chan, uint64_t usec, float vx, float vy, float vz, float vroll, float vpitch, float vyaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[32];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, vx);
	_mav_put_float(buf, 12, vy);
	_mav_put_float(buf, 16, vz);
	_mav_put_float(buf, 20, vroll);
	_mav_put_float(buf, 24, vpitch);
	_mav_put_float(buf, 28, vyaw);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VICON_VELOCITY_ESTIMATE, buf, 32, 219);
#else
	mavlink_vicon_velocity_estimate_t packet;
	packet.usec = usec;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;
	packet.vroll = vroll;
	packet.vpitch = vpitch;
	packet.vyaw = vyaw;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VICON_VELOCITY_ESTIMATE, (const char *)&packet, 32, 219);
#endif
}

#endif

// MESSAGE VICON_VELOCITY_ESTIMATE UNPACKING


/**
 * @brief Get field usec from vicon_velocity_estimate message
 *
 * @return Timestamp (microseconds, synced to UNIX time or since system boot)
 */
static inline uint64_t mavlink_msg_vicon_velocity_estimate_get_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field vx from vicon_velocity_estimate message
 *
 * @return Global X position
 */
static inline float mavlink_msg_vicon_velocity_estimate_get_vx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field vy from vicon_velocity_estimate message
 *
 * @return Global Y position
 */
static inline float mavlink_msg_vicon_velocity_estimate_get_vy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field vz from vicon_velocity_estimate message
 *
 * @return Global Z position
 */
static inline float mavlink_msg_vicon_velocity_estimate_get_vz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field vroll from vicon_velocity_estimate message
 *
 * @return Roll angle in rad
 */
static inline float mavlink_msg_vicon_velocity_estimate_get_vroll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field vpitch from vicon_velocity_estimate message
 *
 * @return Pitch angle in rad
 */
static inline float mavlink_msg_vicon_velocity_estimate_get_vpitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field vyaw from vicon_velocity_estimate message
 *
 * @return Yaw angle in rad
 */
static inline float mavlink_msg_vicon_velocity_estimate_get_vyaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a vicon_velocity_estimate message into a struct
 *
 * @param msg The message to decode
 * @param vicon_velocity_estimate C-struct to decode the message contents into
 */
static inline void mavlink_msg_vicon_velocity_estimate_decode(const mavlink_message_t* msg, mavlink_vicon_velocity_estimate_t* vicon_velocity_estimate)
{
#if MAVLINK_NEED_BYTE_SWAP
	vicon_velocity_estimate->usec = mavlink_msg_vicon_velocity_estimate_get_usec(msg);
	vicon_velocity_estimate->vx = mavlink_msg_vicon_velocity_estimate_get_vx(msg);
	vicon_velocity_estimate->vy = mavlink_msg_vicon_velocity_estimate_get_vy(msg);
	vicon_velocity_estimate->vz = mavlink_msg_vicon_velocity_estimate_get_vz(msg);
	vicon_velocity_estimate->vroll = mavlink_msg_vicon_velocity_estimate_get_vroll(msg);
	vicon_velocity_estimate->vpitch = mavlink_msg_vicon_velocity_estimate_get_vpitch(msg);
	vicon_velocity_estimate->vyaw = mavlink_msg_vicon_velocity_estimate_get_vyaw(msg);
#else
	memcpy(vicon_velocity_estimate, _MAV_PAYLOAD(msg), 32);
#endif
}
