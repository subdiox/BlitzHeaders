/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ADCViewElement.h"

@class UIView, ADCVideoTimer, AVPlayer;

@interface ADCVideo : ADCViewElement {
	AVPlayer* _player;
	BOOL _enabled;
	BOOL _replaying;
	BOOL _lock_pause;
	double _duration;
	int _duration_seconds;
	double _last_playback_position;
	int _desired_playback_state;
	int _actual_playback_state;
	ADCVideoTimer* _video_timer;
	UIView* _parent_container;
	int _attempts_to_rebuild_player;
	BOOL _event_first_quartile_dispatched;
	BOOL _event_mid_point_dispatched;
	BOOL _event_third_quartile_dispatched;
	BOOL _event_ninety_percent_reported;
	BOOL _event_complete_dispatched;
	int _watchdog_trigger;
	id _ad;
}
@property(readonly, assign, nonatomic) BOOL enabled;
@property(assign, nonatomic) BOOL replaying;
@property(assign, nonatomic) id ad;
-(void).cxx_destruct;
-(void)playerItemDidReachEnd:(id)playerItem;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)setPlaybackPosition:(double)position;
-(void)unlockPause;
-(void)resume;
-(void)pause:(BOOL)pause;
-(void)replay;
-(BOOL)setupPlayer;
-(void)reset;
-(void)update:(id)update;
-(void)layout:(id)layout;
-(BOOL)show:(id)show;
-(id)init:(id)init inAd:(id)ad;
@end
