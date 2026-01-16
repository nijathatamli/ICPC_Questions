import asyncio

async def worker(name, delay):
    print(f"{name} started")
    await asyncio.sleep(delay)
    print(f"{name} finished")

async def main():   
    await asyncio.gather(
        worker("A", 2),
        worker("B", 1),
        worker("C", 3),
    )

asyncio.run(main())
