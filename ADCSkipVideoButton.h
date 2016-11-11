/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ADCViewElement.h"

@class UIButton, ADCAlert;

@interface ADCSkipVideoButton : ADCViewElement {
	BOOL _enabled;
	double _delay;
	UIButton* _button;
	ADCAlert* _alert;
	id _ad;
}
@property(assign, nonatomic) id ad;
-(void).cxx_destruct;
-(void)reset;
-(void)buttonPushed;
-(void)update:(id)update;
-(BOOL)show:(id)show;
-(void)layout:(id)layout;
-(id)init:(id)init inAd:(id)ad;
@end
