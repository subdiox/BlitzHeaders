//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface CBMoreAppsBadge : UIView
{
    _Bool _userDefinedBadgeNumber;
    UILabel *_badgeLabel;
    unsigned long long _badgeNumber;
}

+ (id)moreAppsBadge;
@property(nonatomic) _Bool userDefinedBadgeNumber; // @synthesize userDefinedBadgeNumber=_userDefinedBadgeNumber;
@property(nonatomic) unsigned long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
- (void).cxx_destruct;
- (void)updateBadgeLabel:(unsigned long long)arg1;
- (void)updateBadgeNumber;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end

