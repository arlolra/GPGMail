/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSOperation.h"

@class MCActivityMonitor, NSString;

@interface MCMonitoredOperation : NSOperation
{
    MCActivityMonitor *_parentMonitor;
    MCActivityMonitor *_monitor;
}

@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) MCActivityMonitor *parentMonitor; // @synthesize parentMonitor=_parentMonitor;
- (void)executeOperation;
@property(readonly) NSString *activityString;
- (void)main;
- (void)dealloc;
- (id)init;

@end

