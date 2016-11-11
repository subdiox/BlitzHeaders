/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TAGPBGeneratedMessage.h"

@class TAGPCacheOption, NSString, TAGPBMutableArray;

__attribute__((visibility("hidden")))
@interface TAGPResource : TAGPBGeneratedMessage {
}
@property(assign, nonatomic) BOOL googleDomainAccount;
@property(assign, nonatomic) BOOL hasGoogleDomainAccount;
@property(assign, nonatomic) BOOL triggerCompilationEnabled;
@property(assign, nonatomic) BOOL hasTriggerCompilationEnabled;
@property(assign, nonatomic) int resourceFormatVersion;
@property(assign, nonatomic) BOOL hasResourceFormatVersion;
@property(retain, nonatomic) TAGPBMutableArray* usageContextArray;
@property(assign, nonatomic) BOOL hasUsageContextArray;
@property(assign, nonatomic) BOOL obsoleteEnableAutoEventTracking;
@property(assign, nonatomic) BOOL hasObsoleteEnableAutoEventTracking;
@property(assign, nonatomic) float reportingSampleRate;
@property(assign, nonatomic) BOOL hasReportingSampleRate;
@property(retain, nonatomic) TAGPCacheOption* liveJsCacheOption;
@property(assign, nonatomic) BOOL hasLiveJsCacheOption;
@property(retain, nonatomic) NSString* version;
@property(assign, nonatomic) BOOL hasVersion;
@property(retain, nonatomic) NSString* templateVersionSet;
@property(assign, nonatomic) BOOL hasTemplateVersionSet;
@property(retain, nonatomic) NSString* malwareScanAuthCode;
@property(assign, nonatomic) BOOL hasMalwareScanAuthCode;
@property(retain, nonatomic) NSString* previewAuthCode;
@property(assign, nonatomic) BOOL hasPreviewAuthCode;
@property(retain, nonatomic) TAGPBMutableArray* ruleArray;
@property(assign, nonatomic) BOOL hasRuleArray;
@property(retain, nonatomic) TAGPBMutableArray* predicateArray;
@property(assign, nonatomic) BOOL hasPredicateArray;
@property(retain, nonatomic) TAGPBMutableArray* tagArray;
@property(assign, nonatomic) BOOL hasTagArray;
@property(retain, nonatomic) TAGPBMutableArray* macroArray;
@property(assign, nonatomic) BOOL hasMacroArray;
@property(retain, nonatomic) TAGPBMutableArray* propertyArray;
@property(assign, nonatomic) BOOL hasPropertyArray;
@property(retain, nonatomic) TAGPBMutableArray* valueArray;
@property(assign, nonatomic) BOOL hasValueArray;
@property(retain, nonatomic) TAGPBMutableArray* keyArray;
@property(assign, nonatomic) BOOL hasKeyArray;
@property(retain, nonatomic) TAGPBMutableArray* supplementalArray;
@property(assign, nonatomic) BOOL hasSupplementalArray;
+(id)descriptor;
@end
